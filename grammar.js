module.exports = grammar({
  name: 'blink',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.module_definition,
      $.function_definition,
    ),

    module_definition: $ => seq(
      'module',
      field('name', $.identifier),
      repeat($._definition),
      'end',
    ),

    function_definition: $ => seq(
      'fun',
      field('name', $.identifier),
      $.parameters,
      optional(seq(
        ':',
        $.type,
      )),
      $._function_body,
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', $.parameter),
      optional(','),
      ')',
    ),

    parameter: $ => seq(
      field('name', $.identifier),
      ':',
      field('type', $.type),
    ),

    type: $ => choice(
      $.tick_identifier,
      seq(
        field('name', $.identifier),
        optional($.type_parameters),
      ),
    ),

    // type_param_type: $ => token(seq(
    //   '\'',
    //   $.identifier,
    // )),

    // Type parameters on a type
    type_parameters: $ => seq(
      '[',
      sepBy(',', $.type),
      optional(','),
      ']',
    ),

    // Type parameter on a e.g. function
    type_parameter: $ => seq(
      $.tick_identifier,
      // TODO: type conditions
    ),

    _function_body: $ => choice(
      $.block,
      seq('in', $.expression),
    ),

    block: $ => seq(
      'do',
      repeat($.statement),
      optional($.expression),
      'end',
    ),

    statement: $ => seq($.expression, ';'),

    expression: $ => choice(
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.boolean_literal,
      $.char_literal,
    ),

    identifier: _ => /[a-zA-Z_][0-9a-zA-Z_]*/,

    tick_identifier: _ => /'[a-zA-Z_][0-9a-zA-Z_]*/,

    number_literal: _ => /\d+(\.\d+)?/,

    string_literal: $ => choice(
      seq('"', '"'),
      seq('"', $.string_content, '"'),
    ),

    string_content: $ => repeat1(choice(
      $.char_literal,
      token.immediate(prec(1, /[^\\"]+/)),
    )),

    // escape_sequence: _ => token.immediate(seq(
    //   '\\',
    //   /(\"|\\|0|a|b|t|l|n|v|p|r|e|s|d)/,
    //   /x{[0-9a-fA-F]+}/,
    // )),

    boolean_literal: _ => choice('true', 'false'),

    char_literal: _ => token(seq(
      '\\',
      choice(
        'null',
        'alarm',
        'backspace',
        'tab',
        'linefeed',
        'newline',
        'vtab',
        'page',
        'return',
        'esc',
        'space',
        'delete',
        /x[0-9a-fA-F]+/,
        /./,
      ),
    )),

    comment: _ => token(seq("#", /.*/)),
  }
});

/**
 * Creates a rule to match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}


/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}