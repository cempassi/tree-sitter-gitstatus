module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => seq(repeat($.header), repeat($.file)),

    header: ($) => seq("#", $.branch),

    //Branch level informations are obtained from a header
    branch: ($) =>
      seq(
        "branch",
				".",
        choice($.oid, $.head, optional($.upstream), optional($.ab))
      ),

    //last commit
    oid: ($) => seq("oid", choice($._sha1, "(initial)")),

    //current branch
    head: ($) => seq("head", choice($._branchName, "(detached)")),

    // Remote tracked branch
    upstream: ($) => seq("upstream", $._upBranch),

    // Diff with remote commit
    ab: ($) => seq("ab", $.ahead, $.behind),

    // Each file is on a single line
    file: ($) => seq($._area, "\n"),

    _area: ($) => choice($._inplace, $._moved, $.conflicted, $.untracked, $.ignored),

    _inplace: ($) => seq("1", $._stat, $.path),

    _moved: ($) => seq("2", $._stat, $.score, $.path , $.origPath),

    conflicted: ($) =>
      seq("u", $._conflict, $.submodule, $.stagesModes, $.stagesHashes, $.path),

    _stat: ($) => seq($.staged, $.unstaged, $.submodule, $.modes, $.hashes),

    staged: ($) => $._action,

    unstaged: ($) => $._action,

    _action: ($) =>
      choice(".", $.added, $.modified, $.deleted, $.renamed, $.copied),

    _conflict: ($) =>
      choice(
        $.bothAdded,
        $.addedByUs,
        $.addedByThem,
        $.bothDeleted,
        $.deletedByUs,
        $.deletedByThem,
        $.bothModified
      ),

    submodule: ($) => choice("N...", $._isSubmodule),

    modes: ($) => seq($.mHEAD, $.mIndex, $.mWorktree),

    // s => Conflict stages
    stagesModes: ($) => seq($.mStage1, $.mStage2, $.mStage3, $.mWorktree),

    stagesHashes: ($) => seq($.hStage1, $.hStage2, $.hStage3),

    hashes: ($) => seq($.hHEAD, $.hIndex),

    path: ($) => $._path,

    origPath: ($) => $._path,

    // Submodule status sumary available for the parent module
    _isSubmodule: ($) => seq("S", $._submoduleStatus),

    _submoduleStatus: ($) => seq($.subCommit, $.subTracked, $.subUntracked),

    // See the git status documentation for more informations
    untracked: ($) => seq("?", $.path),
    ignored: ($) => seq("!", $.path),

    // m => File modes
    mHEAD: ($) => $._octal,
    mIndex: ($) => $._octal,
    mWorktree: ($) => $._octal,
    mStage1: ($) => $._octal,
    mStage2: ($) => $._octal,
    mStage3: ($) => $._octal,

    // h => File hash
    hHEAD: ($) => $._sha1,
    hIndex: ($) => $._sha1,
    hStage1: ($) => $._sha1,
    hStage2: ($) => $._sha1,
    hStage3: ($) => $._sha1,

    // Actions
    added: () => "A",
    modified: () => "M",
    deleted: () => "D",
    renamed: () => "R",
    copied: () => "C",

    //Conflitcts
    bothAdded: () => "AA",
    addedByUs: () => "AU",
    addedByThem: () => "UA",
    bothDeleted: () => "DD",
    deletedByThem: () => "UD",
    deletedByUs: () => "DU",
    bothModified: () => "UU",

    //Submodule
    subCommit: ($) => choice($._opt_off, "C"),
    subTracked: () => /(\.|M)/,
    subUntracked: () => /[.|U]/,

    //Change and rename
    score: () => /(R|C)[0-9]{3}/,
    _separator: () => /(\t)/,

    //Diff
    ahead: () => /\+\d+/,
    behind: () => /\-\d+/,

    //Regular expressions
    _branchName: () => /\w+\.?\w+/,
    _upBranch: () => /\w+\/\w+\.?\w*/,
    _sha1: () => /[0-9a-f]{5,40}/,
    _octal: () => /\d{6}/,
    _path: () => /[\.]{0,2}.*/,
    identifier: () => /[a-z]+/,
    _opt_off: () => ".",
  },
});
