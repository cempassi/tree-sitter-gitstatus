module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => seq(optional($.header), optional($.file)),

    header: ($) => seq("#", choice($.branch), "\n"),

    //Buffer header grammar
    branch: ($) => seq("branch.", choice($.oid, $.head, $.upstream, $.ab)),
    oid: ($) => seq("oid", choice($.sha1, "(initial)")),
    head: ($) => seq("head", choice($.branchName, "(detached)")),
    upstream: ($) => seq("upstream", $.upBranch),
    ab: ($) => seq("ab", $.ahead, $.behind),

    //File status
    file: ($) => seq($.status, "\n"),
    status: ($) => choice($.untracked, $.ignored, $.modified),
    modified: ($) => $.unstaged,
    unstaged: ($) => seq("1", ".", $.statusCode, $.submodule, $.modes, $.hashes, $.path),
    submodule: ($) => choice("N...", $._isSubmodule),
    _isSubmodule: ($) => seq("S", $._modifications),
    _modifications: ($) => seq($.subCommit, $.subTracked, $.subUntracked),
    modes: ($) => seq($.mHEAD, $.mIndex, $.mWorktree),
		hashes: ($) => seq($.hHEAD, $.hIndex),

    untracked: ($) => seq("?", $.path),
    ignored: ($) => seq("!", $.path),

		hHEAD: () => /[0-9a-f]{5,40}/,
		hIndex: () => /[0-9a-f]{5,40}/,

    mHEAD: () => /\d{6}/,
    mIndex: () => /\d{6}/,
    mWorktree: () => /\d{6}/,
    octal: () => /\d{6}/,

    subCommit: () => /[.|C]/,
    subTracked: () => /[.|M]/,
    subUntracked: () => /[.|U]/,

    statusCode: () => /[MADRCU]/,

    path: () => /[\.\/]?[_\w\/\.]+/,

    ahead: () => /\+\d+/,
    behind: () => /\-\d+/,

    branchName: () => /\w+\.?\w+/,
    upBranch: () => /\w+\/\w+\.?\w*/,

    sha1: () => /[0-9a-f]{5,40}/,

    identifier: ($) => /[a-z]+/,
  },
});
