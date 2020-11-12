module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.header_definition),

    header_definition: ($) => seq("#", $.header_type, "\n"),

    header_type: ($) => choice($.branch),

    branch: ($) => seq("branch", ".", choice($.oid, $.head, $.upstream, $.ab)),

    oid: ($) => seq("oid", choice($.sha1, "(initial)")),
    head: ($) => seq("head", choice($.branch_name, "(detached)")),
    upstream: ($) => seq("upstream", $.upstream_branch),
    ab: ($) => seq("ab", $.ahead, $.behind),

    ahead: () => /\+[0-9]+/,
    behind: () => /\-[0-9]+/,
    branch_name: () => /[a-zA-Z]+/,
    upstream_branch: () => /[a-zA-Z]+\/[a-zA-Z]+/,
    identifier: () => /[a-z]+/,
    sha1: () => /[0-9a-f]{5,40}/,
  },
});
