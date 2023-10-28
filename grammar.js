module.exports = grammar({
  name: 'blink',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.module_definition,
      $.function_definition
    ),

    module_definition: $ => seq(
      'module',
      $.identifier,
      repeat($._definition),
      'end'
    ),

    function_definition: $ => seq(
      'fun',
      $.identifier,
      $.parameter_list,
      $._function_body
    ),

    parameter_list: $ => seq(
      '(',
      // TODO
      ')'
    ),

    _function_body: $ => choice(
      $.block,
      seq('in', $.expression)
    ),

    block: $ => seq(
      'do',
      repeat($.statement),
      optional($.expression),
      'end'
    ),

    statement: $ => seq(
      $.expression,
      ';'
    ),

    expression: $ => choice(
      $.identifier,
      $.number
    ),

    number: _ => /\d+(\.\d+)?/,
    identifier: _ => /([a-zA-Z_][0-9a-zA-Z_]*)/,
  }
});

