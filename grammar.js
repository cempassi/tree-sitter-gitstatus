module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => seq(optional($.header), optional($.file)),

    header: ($) => seq("#", choice($.branch), "\n"),

    //Branch level informations are obtained from a header
    branch: ($) =>
      seq(
        "branch.",
        choice($.oid, $.head, optional($.upstream), optional($.ab))
      ),

    //last commit
    oid: ($) => seq("oid", choice($.sha1, "(initial)")),

    //current branch
    head: ($) => seq("head", choice($.branchName, "(detached)")),

    // Remote tracked branch
    upstream: ($) => seq("upstream", $.upBranch),

    // Diff with remote commit
    ab: ($) => seq("ab", $.ahead, $.behind),

    // Each file is on a single line
    file: ($) => seq($._area, "\n"),

    _area: ($) => choice($._status, $.conflicted, $.untracked, $.ignored),

    _status: ($) => seq("1", choice($.staged, $.unstaged)),

    staged: ($) => seq($._action, ".", $.submodule, $.modes, $.hashes, $.path),

    unstaged: ($) =>
      seq(".", $._action, $.submodule, $.modes, $.hashes, $.path),

    conflicted: ($) => seq("u", $._conflict, $.submodule, $.stagesModes, $.stagesHashes, $.path),

    _action: ($) => choice($.added, $.modified, $.deleted, $.renamed, $.copied),

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

    path: () => /[\.\/]?[_\w\/\.]+/,

    // Submodule status sumary available for the parent module
    _isSubmodule: ($) => seq("S", $._submoduleStatus),

    _submoduleStatus: ($) => seq($.subCommit, $.subTracked, $.subUntracked),

    // See the git status documentation for more informations
    untracked: ($) => seq("?", $.path),
    ignored: ($) => seq("!", $.path),

		// m => File modes
    mHEAD: () => /\d{6}/,
    mIndex: () => /\d{6}/,
    mWorktree: () => /\d{6}/,
    mStage1: () => /\d{6}/,
    mStage2: () => /\d{6}/,
    mStage3: () => /\d{6}/,

		// h => File hash
    hHEAD: () => /[0-9a-f]{5,40}/,
    hIndex: () => /[0-9a-f]{5,40}/,
		hStage1: () => /[0-9a-f]{5,40}/, 
		hStage2: () => /[0-9a-f]{5,40}/, 
		hStage3: () => /[0-9a-f]{5,40}/, 

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
    deletedByUs: () => "DU",
    deletedByThem: () => "UD",
    bothModified: () => "UU",

		//Submodule
    subCommit: ($) => choice($._opt_off, "C"),
    subTracked: () => /[.|M]/,
    subUntracked: () => /[.|U]/,

		//Diff
    ahead: () => /\+\d+/,
    behind: () => /\-\d+/,

		//Header
    branchName: () => /\w+\.?\w+/,
    upBranch: () => /\w+\/\w+\.?\w*/,
    sha1: () => /[0-9a-f]{5,40}/,

    identifier: () => /[a-z]+/,
    _opt_off: () => ".",
  },
});
