module.exports = grammar({
  name: "gitstatus",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.header_definition),

    header_definition: ($) =>
      seq(
        $.header_branch,
        "\n"
      ),

    header_branch: ($) =>
      seq(
        headers("branch"),
        ".",
        field("name", $.branch_name),
        field("value", $.sha1)
      ),
	header_branch_oid: ($) => seq(
		"$oid",
		choice($.sha1, "(initial)")
	),

    branch_name: () => choice("oid", "head", "upstream", "ab"),

    header_arg: () => token(prec(-1, repeat1(/.|\\\r?\n/))),
    identifier: () => /[a-z]+/,
    sha1: () => /[0-9a-f]{5,40}/,
  },
});

function headers(command) {
  return alias(new RegExp("#[ \t]*" + command), "#" + command);
}
