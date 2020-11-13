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
    file: ($) => seq($._status, "\n"),
    _status: ($) => choice($.untracked, $.ignored, $._action),

    _action: ($) => seq("1", choice($.unstaged, $.staged)),
    staged: ($) => seq($._statusCode, ".", $.submodule, $.modes, $.hashes, $.path),
    unstaged: ($) => seq(".", $._statusCode, $.submodule, $.modes, $.hashes, $.path),

		_statusCode: ($) => choice (
			$.added,
			$.modified,
			$.deleted,
			$.renamed,
			$.copied,
		),

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

		added: () => "A",
		modified: () => "M",
		deleted: () => "D",
		renamed: () => "R",
		copied: () => "C",

    subCommit: ($) => choice($._opt_off, "C"),
    subTracked: () => /[.|M]/,
    subUntracked: () => /[.|U]/,

    path: () => /[\.\/]?[_\w\/\.]+/,

    ahead: () => /\+\d+/,
    behind: () => /\-\d+/,

		_opt_off: () => ".",
    branchName: () => /\w+\.?\w+/,
    upBranch: () => /\w+\/\w+\.?\w*/,

    sha1: () => /[0-9a-f]{5,40}/,

    identifier: ($) => /[a-z]+/,
  },
});
