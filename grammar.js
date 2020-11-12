module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.header_definition),

    header_definition: ($) => seq("#", $.header_type, "\n"),

    header_type: ($) => choice($.branch),
    branch: ($) => seq("branch", ".", choice($.oid, $.head)),
    oid: ($) => seq("oid", $.data_oid),
    head: ($) => seq("head", $.data_head),

    data_oid: ($) => choice($.sha1, "(initial)"),
    data_head: ($) => choice($.branch_name, "(detached)"),

    branch_name: () => /[a-zA-Z]+/,
    identifier: () => /[a-z]+/,
    sha1: () => /[0-9a-f]{5,40}/,
  },
});
