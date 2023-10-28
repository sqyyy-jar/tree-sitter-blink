#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_module = 1,
  anon_sym_end = 2,
  anon_sym_fun = 3,
  anon_sym_COLON = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_in = 10,
  anon_sym_do = 11,
  anon_sym_SEMI = 12,
  sym_identifier = 13,
  sym_tick_identifier = 14,
  sym_number_literal = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_content_token1 = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_char_literal = 20,
  sym_comment = 21,
  sym_source_file = 22,
  sym__definition = 23,
  sym_module_definition = 24,
  sym_function_definition = 25,
  sym_parameters = 26,
  sym_parameter = 27,
  sym_type = 28,
  sym_type_parameters = 29,
  sym__function_body = 30,
  sym_block = 31,
  sym_statement = 32,
  sym_expression = 33,
  sym_string_literal = 34,
  sym_string_content = 35,
  sym_boolean_literal = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_parameters_repeat1 = 38,
  aux_sym_type_parameters_repeat1 = 39,
  aux_sym_block_repeat1 = 40,
  aux_sym_string_content_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_fun] = "fun",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_in] = "in",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_tick_identifier] = "tick_identifier",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_char_literal] = "char_literal",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_module_definition] = "module_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_type] = "type",
  [sym_type_parameters] = "type_parameters",
  [sym__function_body] = "_function_body",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_string_literal] = "string_literal",
  [sym_string_content] = "string_content",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_tick_identifier] = sym_tick_identifier,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_char_literal] = sym_char_literal,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_module_definition] = sym_module_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_type] = sym_type,
  [sym_type_parameters] = sym_type_parameters,
  [sym__function_body] = sym__function_body,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_string_content] = sym_string_content,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_tick_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__function_body] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 0},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 57:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tick_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_char_literal);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_char_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_tick_identifier] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__definition] = STATE(9),
    [sym_module_definition] = STATE(9),
    [sym_function_definition] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number_literal,
      sym_char_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(21), 2,
      sym_string_literal,
      sym_boolean_literal,
  [32] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_expression,
    ACTIONS(26), 2,
      sym_number_literal,
      sym_char_literal,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(21), 2,
      sym_string_literal,
      sym_boolean_literal,
  [64] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_end,
    STATE(54), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number_literal,
      sym_char_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(21), 2,
      sym_string_literal,
      sym_boolean_literal,
  [96] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_expression,
    ACTIONS(15), 2,
      sym_number_literal,
      sym_char_literal,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_string_literal,
      sym_boolean_literal,
  [121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_module,
    ACTIONS(42), 1,
      anon_sym_fun,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_type_parameters,
    ACTIONS(45), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      sym_number_literal,
      anon_sym_DQUOTE,
      sym_char_literal,
    ACTIONS(49), 4,
      anon_sym_end,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [192] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(11), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [211] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(6), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
      anon_sym_SEMI,
  [252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [274] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_tick_identifier,
    STATE(53), 1,
      sym_type,
  [293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(77), 1,
      anon_sym_in,
    ACTIONS(79), 1,
      anon_sym_do,
    STATE(29), 2,
      sym__function_body,
      sym_block,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
      anon_sym_SEMI,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [332] = 6,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_string_content_token1,
    ACTIONS(89), 1,
      sym_char_literal,
    ACTIONS(91), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_string_content_repeat1,
    STATE(67), 1,
      sym_string_content,
  [351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
      anon_sym_SEMI,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
      anon_sym_SEMI,
  [384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_in,
      anon_sym_do,
  [395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_tick_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_type,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_in,
    ACTIONS(79), 1,
      anon_sym_do,
    STATE(38), 2,
      sym__function_body,
      sym_block,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(49), 1,
      sym_parameter,
  [471] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym_string_content_token1,
    ACTIONS(120), 1,
      sym_char_literal,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [507] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_string_content_token1,
    ACTIONS(131), 1,
      sym_char_literal,
    STATE(31), 1,
      aux_sym_string_content_repeat1,
  [523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_tick_identifier,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_type,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_tick_identifier,
    STATE(28), 1,
      sym_type,
  [582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_tick_identifier,
    STATE(55), 1,
      sym_type,
  [595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_tick_identifier,
    STATE(59), 1,
      sym_type,
  [608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_do,
  [617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_type_parameters_repeat1,
  [630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_parameter,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_type_parameters_repeat1,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_do,
  [665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
  [678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_parameters_repeat1,
  [691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_parameter,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_do,
  [726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_COLON,
      anon_sym_in,
      anon_sym_do,
  [735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_type_parameters_repeat1,
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_end,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(60), 1,
      sym_parameter,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(181), 1,
      anon_sym_end,
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameters,
  [796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COLON,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_SEMI,
  [833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_identifier,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 173,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 321,
  [SMALL_STATE(20)] = 332,
  [SMALL_STATE(21)] = 351,
  [SMALL_STATE(22)] = 362,
  [SMALL_STATE(23)] = 373,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 431,
  [SMALL_STATE(29)] = 445,
  [SMALL_STATE(30)] = 455,
  [SMALL_STATE(31)] = 471,
  [SMALL_STATE(32)] = 487,
  [SMALL_STATE(33)] = 497,
  [SMALL_STATE(34)] = 507,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 539,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 559,
  [SMALL_STATE(39)] = 569,
  [SMALL_STATE(40)] = 582,
  [SMALL_STATE(41)] = 595,
  [SMALL_STATE(42)] = 608,
  [SMALL_STATE(43)] = 617,
  [SMALL_STATE(44)] = 630,
  [SMALL_STATE(45)] = 643,
  [SMALL_STATE(46)] = 656,
  [SMALL_STATE(47)] = 665,
  [SMALL_STATE(48)] = 678,
  [SMALL_STATE(49)] = 691,
  [SMALL_STATE(50)] = 704,
  [SMALL_STATE(51)] = 717,
  [SMALL_STATE(52)] = 726,
  [SMALL_STATE(53)] = 735,
  [SMALL_STATE(54)] = 748,
  [SMALL_STATE(55)] = 758,
  [SMALL_STATE(56)] = 766,
  [SMALL_STATE(57)] = 776,
  [SMALL_STATE(58)] = 786,
  [SMALL_STATE(59)] = 796,
  [SMALL_STATE(60)] = 804,
  [SMALL_STATE(61)] = 812,
  [SMALL_STATE(62)] = 819,
  [SMALL_STATE(63)] = 826,
  [SMALL_STATE(64)] = 833,
  [SMALL_STATE(65)] = 840,
  [SMALL_STATE(66)] = 847,
  [SMALL_STATE(67)] = 854,
  [SMALL_STATE(68)] = 861,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(31),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(56),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blink(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
