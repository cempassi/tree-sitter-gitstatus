module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => seq(optional($.header), optional($.file)),

    header: ($) => seq("#", $.header_type, "\n"),

    header_type: ($) => choice($.branch),

		//Buffer header grammar
    branch: ($) => seq("branch", ".", choice($.oid, $.head, $.upstream, $.ab)),
    oid: ($) => seq("oid", choice($.sha1, "(initial)")),
    head: ($) => seq("head", choice($.branch_name, "(detached)")),
    upstream: ($) => seq("upstream", $.upstream_branch),
    ab: ($) => seq("ab", $.ahead, $.behind),

		//File status
		file: ($) => seq($.type),


		type: () => /[12u]/,
    ahead: () => /\+\d+/,
    behind: () => /\-\d+/,
    branch_name: () => /\w+\.?\w+/,
    upstream_branch: () => /\w+\/\w+\.?\w*/,
    identifier: () => /[a-z]+/,
    sha1: () => /[0-9a-f]{5,40}/,

  },
});
