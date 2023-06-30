#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 286
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 10
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATdefine_DASHcolor = 7,
  anon_sym_ATkeyframes = 8,
  aux_sym_keyframes_statement_token1 = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_from = 12,
  sym_to = 13,
  anon_sym_ATsupports = 14,
  sym_nesting_selector = 15,
  anon_sym_STAR = 16,
  anon_sym_DOT = 17,
  anon_sym_COLON = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_POUND = 20,
  anon_sym_LBRACK = 21,
  anon_sym_EQ = 22,
  anon_sym_TILDE_EQ = 23,
  anon_sym_CARET_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_STAR_EQ = 26,
  anon_sym_DOLLAR_EQ = 27,
  anon_sym_RBRACK = 28,
  anon_sym_GT = 29,
  anon_sym_TILDE = 30,
  anon_sym_PLUS = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_color_value_token1 = 41,
  sym_string_value = 42,
  aux_sym_integer_value_token1 = 43,
  aux_sym_float_value_token1 = 44,
  sym_unit = 45,
  anon_sym_DASH = 46,
  anon_sym_SLASH = 47,
  sym_identifier = 48,
  sym_at_keyword = 49,
  sym_comment = 50,
  sym_plain_value = 51,
  sym__descendant_operator = 52,
  sym_stylesheet = 53,
  sym_import_statement = 54,
  sym_media_statement = 55,
  sym_charset_statement = 56,
  sym_namespace_statement = 57,
  sym_define_color_statement = 58,
  sym_keyframes_statement = 59,
  sym_keyframe_block_list = 60,
  sym_keyframe_block = 61,
  sym_supports_statement = 62,
  sym_at_rule = 63,
  sym_rule_set = 64,
  sym_selectors = 65,
  sym_block = 66,
  sym__selector = 67,
  sym_universal_selector = 68,
  sym_class_selector = 69,
  sym_pseudo_class_selector = 70,
  sym_pseudo_element_selector = 71,
  sym_id_selector = 72,
  sym_attribute_selector = 73,
  sym_child_selector = 74,
  sym_descendant_selector = 75,
  sym_sibling_selector = 76,
  sym_adjacent_sibling_selector = 77,
  sym_pseudo_class_arguments = 78,
  sym_declaration = 79,
  sym_last_declaration = 80,
  sym__query = 81,
  sym_feature_query = 82,
  sym_parenthesized_query = 83,
  sym_binary_query = 84,
  sym_unary_query = 85,
  sym_selector_query = 86,
  sym__value = 87,
  sym_parenthesized_value = 88,
  sym_color_value = 89,
  sym_integer_value = 90,
  sym_float_value = 91,
  sym_call_expression = 92,
  sym_binary_expression = 93,
  sym_arguments = 94,
  aux_sym_stylesheet_repeat1 = 95,
  aux_sym_import_statement_repeat1 = 96,
  aux_sym_keyframe_block_list_repeat1 = 97,
  aux_sym_selectors_repeat1 = 98,
  aux_sym_block_repeat1 = 99,
  aux_sym_pseudo_class_arguments_repeat1 = 100,
  aux_sym_pseudo_class_arguments_repeat2 = 101,
  aux_sym_declaration_repeat1 = 102,
  aux_sym_arguments_repeat1 = 103,
  alias_sym_attribute_name = 104,
  alias_sym_class_name = 105,
  alias_sym_feature_name = 106,
  alias_sym_function_name = 107,
  alias_sym_id_name = 108,
  alias_sym_keyframes_name = 109,
  alias_sym_keyword_query = 110,
  alias_sym_namespace_name = 111,
  alias_sym_property_name = 112,
  alias_sym_tag_name = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATdefine_DASHcolor] = "@define-color",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_define_color_statement] = "define_color_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATdefine_DASHcolor] = anon_sym_ATdefine_DASHcolor,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [sym_string_value] = sym_string_value,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_define_color_statement] = sym_define_color_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_pseudo_class_arguments_repeat2] = aux_sym_pseudo_class_arguments_repeat2,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdefine_DASHcolor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_define_color_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
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
  [27] = 22,
  [28] = 22,
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
  [39] = 29,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 35,
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
  [55] = 52,
  [56] = 46,
  [57] = 48,
  [58] = 58,
  [59] = 50,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 30,
  [64] = 61,
  [65] = 65,
  [66] = 54,
  [67] = 44,
  [68] = 47,
  [69] = 40,
  [70] = 49,
  [71] = 33,
  [72] = 51,
  [73] = 58,
  [74] = 32,
  [75] = 31,
  [76] = 34,
  [77] = 37,
  [78] = 41,
  [79] = 42,
  [80] = 53,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 86,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 104,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 105,
  [116] = 114,
  [117] = 117,
  [118] = 118,
  [119] = 104,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 65,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 150,
  [152] = 89,
  [153] = 81,
  [154] = 82,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 155,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 88,
  [165] = 93,
  [166] = 166,
  [167] = 95,
  [168] = 85,
  [169] = 90,
  [170] = 84,
  [171] = 92,
  [172] = 91,
  [173] = 65,
  [174] = 82,
  [175] = 81,
  [176] = 85,
  [177] = 84,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 92,
  [182] = 90,
  [183] = 95,
  [184] = 184,
  [185] = 185,
  [186] = 180,
  [187] = 89,
  [188] = 179,
  [189] = 189,
  [190] = 88,
  [191] = 93,
  [192] = 91,
  [193] = 185,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 194,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 203,
  [210] = 208,
  [211] = 211,
  [212] = 208,
  [213] = 213,
  [214] = 214,
  [215] = 211,
  [216] = 34,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 217,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 217,
  [226] = 226,
  [227] = 61,
  [228] = 221,
  [229] = 226,
  [230] = 218,
  [231] = 40,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 233,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 81,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 243,
  [248] = 248,
  [249] = 246,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 251,
  [260] = 260,
  [261] = 261,
  [262] = 253,
  [263] = 263,
  [264] = 264,
  [265] = 257,
  [266] = 266,
  [267] = 266,
  [268] = 253,
  [269] = 269,
  [270] = 260,
  [271] = 261,
  [272] = 263,
  [273] = 264,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 254,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 264,
  [284] = 256,
  [285] = 261,
};

static inline bool sym_plain_value_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= '*')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_plain_value_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? (c >= ' ' && c <= '!')
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ';'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '@') ADVANCE(66);
      if (lookahead == '_') ADVANCE(191);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '_') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(268);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 68:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 69:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(71);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '&') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATdefine_DASHcolor);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '_') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(25);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == 'k') ADVANCE(228);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == 'y') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(69);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 73},
  [30] = {.lex_state = 73},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 73},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 73},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 73},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 73},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 73},
  [50] = {.lex_state = 73},
  [51] = {.lex_state = 73},
  [52] = {.lex_state = 73},
  [53] = {.lex_state = 73},
  [54] = {.lex_state = 73},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 73},
  [57] = {.lex_state = 73},
  [58] = {.lex_state = 73},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 73},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 73},
  [63] = {.lex_state = 73},
  [64] = {.lex_state = 73},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 73},
  [67] = {.lex_state = 73},
  [68] = {.lex_state = 73},
  [69] = {.lex_state = 73},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 73},
  [72] = {.lex_state = 73},
  [73] = {.lex_state = 73},
  [74] = {.lex_state = 73},
  [75] = {.lex_state = 73},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 73},
  [78] = {.lex_state = 73},
  [79] = {.lex_state = 73},
  [80] = {.lex_state = 73},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 73, .external_lex_state = 1},
  [122] = {.lex_state = 73, .external_lex_state = 1},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 73, .external_lex_state = 1},
  [125] = {.lex_state = 73, .external_lex_state = 1},
  [126] = {.lex_state = 73, .external_lex_state = 1},
  [127] = {.lex_state = 73, .external_lex_state = 1},
  [128] = {.lex_state = 73, .external_lex_state = 1},
  [129] = {.lex_state = 73, .external_lex_state = 1},
  [130] = {.lex_state = 73, .external_lex_state = 1},
  [131] = {.lex_state = 73, .external_lex_state = 1},
  [132] = {.lex_state = 73, .external_lex_state = 1},
  [133] = {.lex_state = 73, .external_lex_state = 1},
  [134] = {.lex_state = 73, .external_lex_state = 1},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 73, .external_lex_state = 1},
  [137] = {.lex_state = 73, .external_lex_state = 1},
  [138] = {.lex_state = 73, .external_lex_state = 1},
  [139] = {.lex_state = 73, .external_lex_state = 1},
  [140] = {.lex_state = 73, .external_lex_state = 1},
  [141] = {.lex_state = 73, .external_lex_state = 1},
  [142] = {.lex_state = 73, .external_lex_state = 1},
  [143] = {.lex_state = 73, .external_lex_state = 1},
  [144] = {.lex_state = 73, .external_lex_state = 1},
  [145] = {.lex_state = 73, .external_lex_state = 1},
  [146] = {.lex_state = 73, .external_lex_state = 1},
  [147] = {.lex_state = 73, .external_lex_state = 1},
  [148] = {.lex_state = 73, .external_lex_state = 1},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 73, .external_lex_state = 1},
  [151] = {.lex_state = 73, .external_lex_state = 1},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 73, .external_lex_state = 1},
  [162] = {.lex_state = 73, .external_lex_state = 1},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 73, .external_lex_state = 1},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 73},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 73},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 73},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 73},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 73},
  [236] = {.lex_state = 73},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 18},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 73},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 73},
  [255] = {.lex_state = 73},
  [256] = {.lex_state = 73},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 73},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 24},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 73},
  [276] = {.lex_state = 73},
  [277] = {.lex_state = 73},
  [278] = {.lex_state = 73},
  [279] = {.lex_state = 73},
  [280] = {.lex_state = 73},
  [281] = {.lex_state = 73},
  [282] = {.lex_state = 73},
  [283] = {.lex_state = 24},
  [284] = {.lex_state = 73},
  [285] = {.lex_state = 0},
};

enum {
  ts_external_token__descendant_operator = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATdefine_DASHcolor] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__descendant_operator] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(274),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_define_color_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(249),
    [sym__selector] = STATE(142),
    [sym_universal_selector] = STATE(142),
    [sym_class_selector] = STATE(142),
    [sym_pseudo_class_selector] = STATE(142),
    [sym_pseudo_element_selector] = STATE(142),
    [sym_id_selector] = STATE(142),
    [sym_attribute_selector] = STATE(142),
    [sym_child_selector] = STATE(142),
    [sym_descendant_selector] = STATE(142),
    [sym_sibling_selector] = STATE(142),
    [sym_adjacent_sibling_selector] = STATE(142),
    [sym_declaration] = STATE(10),
    [aux_sym_stylesheet_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATdefine_DASHcolor] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_COLON_COLON] = ACTIONS(29),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_string_value] = ACTIONS(21),
    [sym_identifier] = ACTIONS(35),
    [sym_at_keyword] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_ATsupports,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    STATE(246), 1,
      sym_selectors,
    STATE(253), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(7), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [89] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(53), 1,
      anon_sym_ATsupports,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_selectors,
    STATE(285), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [178] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(53), 1,
      anon_sym_ATsupports,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_selectors,
    STATE(271), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [267] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(53), 1,
      anon_sym_ATsupports,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_selectors,
    STATE(268), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(4), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [356] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(53), 1,
      anon_sym_ATsupports,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_selectors,
    STATE(262), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(3), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [445] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_ATimport,
    ACTIONS(41), 1,
      anon_sym_ATmedia,
    ACTIONS(43), 1,
      anon_sym_ATcharset,
    ACTIONS(45), 1,
      anon_sym_ATnamespace,
    ACTIONS(47), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(53), 1,
      anon_sym_ATsupports,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_at_keyword,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_selectors,
    STATE(261), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [534] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_ATimport,
    ACTIONS(74), 1,
      anon_sym_ATmedia,
    ACTIONS(77), 1,
      anon_sym_ATcharset,
    ACTIONS(80), 1,
      anon_sym_ATnamespace,
    ACTIONS(83), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(89), 1,
      anon_sym_ATsupports,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(98), 1,
      anon_sym_DOT,
    ACTIONS(101), 1,
      anon_sym_COLON,
    ACTIONS(104), 1,
      anon_sym_COLON_COLON,
    ACTIONS(107), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym_at_keyword,
    STATE(249), 1,
      sym_selectors,
    ACTIONS(86), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(92), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [620] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_ATimport,
    ACTIONS(122), 1,
      anon_sym_ATmedia,
    ACTIONS(125), 1,
      anon_sym_ATcharset,
    ACTIONS(128), 1,
      anon_sym_ATnamespace,
    ACTIONS(131), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_ATsupports,
    ACTIONS(145), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(154), 1,
      anon_sym_COLON_COLON,
    ACTIONS(157), 1,
      anon_sym_POUND,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_at_keyword,
    STATE(246), 1,
      sym_selectors,
    ACTIONS(134), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(142), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(9), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_block_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [706] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_ATimport,
    ACTIONS(9), 1,
      anon_sym_ATmedia,
    ACTIONS(11), 1,
      anon_sym_ATcharset,
    ACTIONS(13), 1,
      anon_sym_ATnamespace,
    ACTIONS(15), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_at_keyword,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_selectors,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(8), 11,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_define_color_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(142), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [792] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(171), 1,
      sym_nesting_selector,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_at_keyword,
    ACTIONS(191), 1,
      sym_plain_value,
    STATE(38), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(131), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [866] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(181), 1,
      sym_string_value,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_at_keyword,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(193), 1,
      sym_nesting_selector,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(161), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [937] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_important,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    STATE(18), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [995] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(215), 1,
      sym_important,
    STATE(43), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1050] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(219), 3,
      anon_sym_STAR,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(221), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(225), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(217), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1089] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(229), 1,
      sym_important,
    STATE(35), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(233), 4,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(237), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(231), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1177] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      sym_important,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1227] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_POUND,
    ACTIONS(253), 1,
      anon_sym_LPAREN2,
    ACTIONS(259), 1,
      aux_sym_integer_value_token1,
    ACTIONS(262), 1,
      aux_sym_float_value_token1,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(268), 1,
      sym_plain_value,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(256), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(248), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1273] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(271), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(137), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1315] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(275), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(136), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1357] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(225), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1405] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(281), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(138), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1447] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(283), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(124), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1489] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(285), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(162), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1531] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      sym_identifier,
    ACTIONS(287), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(166), 11,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
  [1573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(220), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1621] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(217), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(293), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(297), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(303), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(307), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(311), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(315), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1831] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      sym_important,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1878] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      anon_sym_LPAREN2,
    ACTIONS(332), 1,
      aux_sym_integer_value_token1,
    ACTIONS(335), 1,
      aux_sym_float_value_token1,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(341), 1,
      sym_plain_value,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(329), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(321), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(346), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [1948] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(234), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(293), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(354), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(358), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(362), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2103] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(213), 1,
      sym_plain_value,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      sym_important,
    STATE(19), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(209), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(368), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2177] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(370), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(374), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(378), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(380), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(386), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(388), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(392), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(398), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(400), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(404), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(398), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(374), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(380), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(410), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(388), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(412), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(418), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(412), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(297), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(418), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2733] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_arguments,
    ACTIONS(225), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(219), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
      sym_at_keyword,
  [2764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(404), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(368), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(378), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(354), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(386), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(311), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(392), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(410), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [2980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(307), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(303), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(315), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(346), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(358), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(362), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(400), 10,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATdefine_DASHcolor,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      anon_sym_COLON,
      sym_at_keyword,
  [3169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym_unit,
    ACTIONS(422), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(420), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym_unit,
    ACTIONS(428), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(426), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3225] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(434), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(438), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3358] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(446), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(450), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(454), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(458), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(462), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(466), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3549] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(472), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3615] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3656] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3694] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(480), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(211), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3730] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(191), 1,
      sym_plain_value,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    STATE(94), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(189), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(110), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(492), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(248), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3796] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    ACTIONS(480), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(488), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(215), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(498), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(496), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [3860] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(502), 1,
      sym_plain_value,
    ACTIONS(500), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3895] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(516), 1,
      sym_plain_value,
    ACTIONS(508), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(210), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3930] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_LPAREN2,
    ACTIONS(524), 1,
      aux_sym_integer_value_token1,
    ACTIONS(526), 1,
      aux_sym_float_value_token1,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym_plain_value,
    ACTIONS(522), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(167), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3965] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(534), 1,
      sym_plain_value,
    ACTIONS(532), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(206), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4000] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(538), 1,
      sym_plain_value,
    ACTIONS(536), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(207), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4035] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym_plain_value,
    ACTIONS(540), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(100), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4070] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym_plain_value,
    ACTIONS(544), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(183), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4105] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(205), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(550), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(548), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
      sym_at_keyword,
  [4132] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_plain_value,
    ACTIONS(552), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(212), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4167] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(558), 1,
      sym_plain_value,
    ACTIONS(556), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(16), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4202] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(562), 1,
      sym_plain_value,
    ACTIONS(560), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(14), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4237] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_LPAREN2,
    ACTIONS(524), 1,
      aux_sym_integer_value_token1,
    ACTIONS(526), 1,
      aux_sym_float_value_token1,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(566), 1,
      sym_plain_value,
    ACTIONS(564), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(98), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4272] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(203), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_plain_value,
    ACTIONS(568), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(95), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_LPAREN2,
    ACTIONS(524), 1,
      aux_sym_integer_value_token1,
    ACTIONS(526), 1,
      aux_sym_float_value_token1,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(574), 1,
      sym_plain_value,
    ACTIONS(572), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(101), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4342] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_plain_value,
    ACTIONS(576), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(214), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4377] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym_plain_value,
    ACTIONS(580), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(213), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4412] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      anon_sym_LPAREN2,
    ACTIONS(510), 1,
      aux_sym_integer_value_token1,
    ACTIONS(512), 1,
      aux_sym_float_value_token1,
    ACTIONS(514), 1,
      sym_identifier,
    ACTIONS(586), 1,
      sym_plain_value,
    ACTIONS(584), 2,
      sym_string_value,
      sym_at_keyword,
    STATE(208), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4447] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(180), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_pseudo_class_arguments,
    ACTIONS(592), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_pseudo_class_arguments,
    ACTIONS(598), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4533] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(186), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(610), 1,
      anon_sym_COLON,
    ACTIONS(606), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_COLON,
    ACTIONS(612), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_COLON,
    ACTIONS(616), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COLON,
    ACTIONS(620), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(624), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(628), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(632), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4709] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_COLON_COLON,
    ACTIONS(640), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_GT,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_PLUS,
    ACTIONS(650), 1,
      sym__descendant_operator,
    STATE(234), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_COLON,
    ACTIONS(652), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_COLON,
    ACTIONS(656), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(660), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4809] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
    ACTIONS(219), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(225), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [4833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(666), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(672), 1,
      anon_sym_COLON,
    ACTIONS(670), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(676), 1,
      anon_sym_COLON,
    ACTIONS(674), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(678), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_COLON,
    ACTIONS(682), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_COLON,
    ACTIONS(686), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [4959] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_COLON_COLON,
    ACTIONS(640), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_GT,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_PLUS,
    ACTIONS(650), 1,
      sym__descendant_operator,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      anon_sym_LBRACE,
    STATE(238), 1,
      aux_sym_selectors_repeat1,
  [4999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(217), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COLON,
    ACTIONS(694), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_COLON,
    ACTIONS(698), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_COLON,
    ACTIONS(702), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(706), 11,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
    ACTIONS(217), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5118] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(202), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_COLON,
    ACTIONS(217), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COLON,
    ACTIONS(217), 10,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
  [5181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(452), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_unit,
    ACTIONS(420), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(422), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym_unit,
    ACTIONS(426), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(428), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(218), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(240), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(199), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5317] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(196), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(194), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(230), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5392] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_COLON_COLON,
    ACTIONS(640), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_GT,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_PLUS,
    ACTIONS(650), 1,
      sym__descendant_operator,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5427] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_COLON_COLON,
    ACTIONS(640), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_GT,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_PLUS,
    ACTIONS(650), 1,
      sym__descendant_operator,
    ACTIONS(724), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN2,
    ACTIONS(486), 1,
      anon_sym_selector,
    ACTIONS(490), 1,
      sym_identifier,
    ACTIONS(484), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(201), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(448), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(468), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5523] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(638), 1,
      anon_sym_COLON_COLON,
    ACTIONS(640), 1,
      anon_sym_POUND,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
    ACTIONS(644), 1,
      anon_sym_GT,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_PLUS,
    ACTIONS(650), 1,
      sym__descendant_operator,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [5557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(474), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(440), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(456), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(436), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(464), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(460), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_SLASH,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_arguments,
    ACTIONS(219), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5686] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SLASH,
    ACTIONS(730), 1,
      sym_unit,
    ACTIONS(426), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SLASH,
    ACTIONS(732), 1,
      sym_unit,
    ACTIONS(420), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SLASH,
    ACTIONS(438), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SLASH,
    ACTIONS(434), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5752] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(739), 1,
      aux_sym_integer_value_token1,
    STATE(244), 1,
      sym_integer_value,
    ACTIONS(736), 2,
      sym_from,
      sym_to,
    STATE(178), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5773] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(746), 1,
      aux_sym_integer_value_token1,
    STATE(244), 1,
      sym_integer_value,
    ACTIONS(744), 2,
      sym_from,
      sym_to,
    STATE(178), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5794] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_block,
    STATE(204), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [5817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_SLASH,
    ACTIONS(462), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_SLASH,
    ACTIONS(454), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SLASH,
    ACTIONS(472), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACK,
    ACTIONS(754), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_integer_value_token1,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_integer_value,
    ACTIONS(744), 2,
      sym_from,
      sym_to,
    STATE(179), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5898] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_block,
    STATE(205), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [5921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(450), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_integer_value_token1,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_integer_value,
    ACTIONS(744), 2,
      sym_from,
      sym_to,
    STATE(178), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RBRACK,
    ACTIONS(764), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SLASH,
    ACTIONS(446), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_SLASH,
    ACTIONS(466), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_SLASH,
    ACTIONS(458), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [6017] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym_integer_value_token1,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(244), 1,
      sym_integer_value,
    ACTIONS(744), 2,
      sym_from,
      sym_to,
    STATE(188), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [6038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_block,
    STATE(229), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_block,
    STATE(226), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(782), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(784), 1,
      sym_string_value,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(165), 1,
      sym_arguments,
    STATE(260), 1,
      sym_call_expression,
  [6182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_block,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
  [6201] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_block,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
  [6220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6265] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      sym_identifier,
    ACTIONS(802), 1,
      sym_string_value,
    STATE(165), 1,
      sym_arguments,
    STATE(270), 1,
      sym_call_expression,
  [6284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      anon_sym_SEMI,
    STATE(237), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SLASH,
    ACTIONS(812), 1,
      anon_sym_RBRACK,
    ACTIONS(794), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_SEMI,
    STATE(233), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_COLON,
    ACTIONS(774), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(257), 2,
      sym_color_value,
      sym_call_expression,
  [6456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(782), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(827), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_block,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
  [6524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      sym_identifier,
    STATE(265), 2,
      sym_color_value,
      sym_call_expression,
  [6548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      sym_block,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
  [6564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_selectors_repeat1,
  [6601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
  [6614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      sym_string_value,
    ACTIONS(841), 1,
      sym_identifier,
    STATE(266), 1,
      sym_call_expression,
  [6640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_string_value,
    ACTIONS(845), 1,
      sym_identifier,
    STATE(267), 1,
      sym_call_expression,
  [6653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
  [6666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(849), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      aux_sym_selectors_repeat1,
  [6679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(239), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(752), 2,
      anon_sym_and,
      anon_sym_or,
  [6703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      sym_unit,
  [6713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_arguments,
  [6723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_keyframe_block_list,
  [6733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(223), 1,
      sym_block,
  [6743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
  [6753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [6763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_keyframe_block_list,
  [6773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      aux_sym_color_value_token1,
    ACTIONS(866), 1,
      sym_identifier,
  [6783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [6793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
  [6803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [6810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym_identifier,
  [6817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [6824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_identifier,
  [6831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_identifier,
  [6838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_identifier,
  [6845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [6852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [6859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_SEMI,
  [6866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SEMI,
  [6873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [6880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [6887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [6894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_color_value_token1,
  [6901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      anon_sym_SEMI,
  [6908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_SEMI,
  [6915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
  [6922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [6929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_LPAREN2,
  [6936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_SEMI,
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [6950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_SEMI,
  [6957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      aux_sym_color_value_token1,
  [6964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      ts_builtin_sym_end,
  [6971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_identifier,
  [6978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
  [6985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_identifier,
  [6992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_identifier,
  [6999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_identifier,
  [7006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_identifier,
  [7013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_identifier,
  [7020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_identifier,
  [7027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      aux_sym_color_value_token1,
  [7034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [7041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 89,
  [SMALL_STATE(4)] = 178,
  [SMALL_STATE(5)] = 267,
  [SMALL_STATE(6)] = 356,
  [SMALL_STATE(7)] = 445,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 620,
  [SMALL_STATE(10)] = 706,
  [SMALL_STATE(11)] = 792,
  [SMALL_STATE(12)] = 866,
  [SMALL_STATE(13)] = 937,
  [SMALL_STATE(14)] = 995,
  [SMALL_STATE(15)] = 1050,
  [SMALL_STATE(16)] = 1089,
  [SMALL_STATE(17)] = 1144,
  [SMALL_STATE(18)] = 1177,
  [SMALL_STATE(19)] = 1227,
  [SMALL_STATE(20)] = 1273,
  [SMALL_STATE(21)] = 1315,
  [SMALL_STATE(22)] = 1357,
  [SMALL_STATE(23)] = 1405,
  [SMALL_STATE(24)] = 1447,
  [SMALL_STATE(25)] = 1489,
  [SMALL_STATE(26)] = 1531,
  [SMALL_STATE(27)] = 1573,
  [SMALL_STATE(28)] = 1621,
  [SMALL_STATE(29)] = 1669,
  [SMALL_STATE(30)] = 1696,
  [SMALL_STATE(31)] = 1723,
  [SMALL_STATE(32)] = 1750,
  [SMALL_STATE(33)] = 1777,
  [SMALL_STATE(34)] = 1804,
  [SMALL_STATE(35)] = 1831,
  [SMALL_STATE(36)] = 1878,
  [SMALL_STATE(37)] = 1921,
  [SMALL_STATE(38)] = 1948,
  [SMALL_STATE(39)] = 1995,
  [SMALL_STATE(40)] = 2022,
  [SMALL_STATE(41)] = 2049,
  [SMALL_STATE(42)] = 2076,
  [SMALL_STATE(43)] = 2103,
  [SMALL_STATE(44)] = 2150,
  [SMALL_STATE(45)] = 2177,
  [SMALL_STATE(46)] = 2220,
  [SMALL_STATE(47)] = 2247,
  [SMALL_STATE(48)] = 2274,
  [SMALL_STATE(49)] = 2301,
  [SMALL_STATE(50)] = 2328,
  [SMALL_STATE(51)] = 2355,
  [SMALL_STATE(52)] = 2382,
  [SMALL_STATE(53)] = 2409,
  [SMALL_STATE(54)] = 2436,
  [SMALL_STATE(55)] = 2463,
  [SMALL_STATE(56)] = 2490,
  [SMALL_STATE(57)] = 2517,
  [SMALL_STATE(58)] = 2544,
  [SMALL_STATE(59)] = 2571,
  [SMALL_STATE(60)] = 2598,
  [SMALL_STATE(61)] = 2625,
  [SMALL_STATE(62)] = 2652,
  [SMALL_STATE(63)] = 2679,
  [SMALL_STATE(64)] = 2706,
  [SMALL_STATE(65)] = 2733,
  [SMALL_STATE(66)] = 2764,
  [SMALL_STATE(67)] = 2791,
  [SMALL_STATE(68)] = 2818,
  [SMALL_STATE(69)] = 2845,
  [SMALL_STATE(70)] = 2872,
  [SMALL_STATE(71)] = 2899,
  [SMALL_STATE(72)] = 2926,
  [SMALL_STATE(73)] = 2953,
  [SMALL_STATE(74)] = 2980,
  [SMALL_STATE(75)] = 3007,
  [SMALL_STATE(76)] = 3034,
  [SMALL_STATE(77)] = 3061,
  [SMALL_STATE(78)] = 3088,
  [SMALL_STATE(79)] = 3115,
  [SMALL_STATE(80)] = 3142,
  [SMALL_STATE(81)] = 3169,
  [SMALL_STATE(82)] = 3197,
  [SMALL_STATE(83)] = 3225,
  [SMALL_STATE(84)] = 3267,
  [SMALL_STATE(85)] = 3292,
  [SMALL_STATE(86)] = 3317,
  [SMALL_STATE(87)] = 3358,
  [SMALL_STATE(88)] = 3399,
  [SMALL_STATE(89)] = 3424,
  [SMALL_STATE(90)] = 3449,
  [SMALL_STATE(91)] = 3474,
  [SMALL_STATE(92)] = 3499,
  [SMALL_STATE(93)] = 3524,
  [SMALL_STATE(94)] = 3549,
  [SMALL_STATE(95)] = 3590,
  [SMALL_STATE(96)] = 3615,
  [SMALL_STATE(97)] = 3656,
  [SMALL_STATE(98)] = 3694,
  [SMALL_STATE(99)] = 3730,
  [SMALL_STATE(100)] = 3768,
  [SMALL_STATE(101)] = 3796,
  [SMALL_STATE(102)] = 3832,
  [SMALL_STATE(103)] = 3860,
  [SMALL_STATE(104)] = 3895,
  [SMALL_STATE(105)] = 3930,
  [SMALL_STATE(106)] = 3965,
  [SMALL_STATE(107)] = 4000,
  [SMALL_STATE(108)] = 4035,
  [SMALL_STATE(109)] = 4070,
  [SMALL_STATE(110)] = 4105,
  [SMALL_STATE(111)] = 4132,
  [SMALL_STATE(112)] = 4167,
  [SMALL_STATE(113)] = 4202,
  [SMALL_STATE(114)] = 4237,
  [SMALL_STATE(115)] = 4272,
  [SMALL_STATE(116)] = 4307,
  [SMALL_STATE(117)] = 4342,
  [SMALL_STATE(118)] = 4377,
  [SMALL_STATE(119)] = 4412,
  [SMALL_STATE(120)] = 4447,
  [SMALL_STATE(121)] = 4481,
  [SMALL_STATE(122)] = 4507,
  [SMALL_STATE(123)] = 4533,
  [SMALL_STATE(124)] = 4567,
  [SMALL_STATE(125)] = 4589,
  [SMALL_STATE(126)] = 4609,
  [SMALL_STATE(127)] = 4629,
  [SMALL_STATE(128)] = 4649,
  [SMALL_STATE(129)] = 4669,
  [SMALL_STATE(130)] = 4689,
  [SMALL_STATE(131)] = 4709,
  [SMALL_STATE(132)] = 4749,
  [SMALL_STATE(133)] = 4769,
  [SMALL_STATE(134)] = 4789,
  [SMALL_STATE(135)] = 4809,
  [SMALL_STATE(136)] = 4833,
  [SMALL_STATE(137)] = 4855,
  [SMALL_STATE(138)] = 4877,
  [SMALL_STATE(139)] = 4899,
  [SMALL_STATE(140)] = 4919,
  [SMALL_STATE(141)] = 4939,
  [SMALL_STATE(142)] = 4959,
  [SMALL_STATE(143)] = 4999,
  [SMALL_STATE(144)] = 5019,
  [SMALL_STATE(145)] = 5039,
  [SMALL_STATE(146)] = 5059,
  [SMALL_STATE(147)] = 5079,
  [SMALL_STATE(148)] = 5099,
  [SMALL_STATE(149)] = 5118,
  [SMALL_STATE(150)] = 5143,
  [SMALL_STATE(151)] = 5162,
  [SMALL_STATE(152)] = 5181,
  [SMALL_STATE(153)] = 5200,
  [SMALL_STATE(154)] = 5221,
  [SMALL_STATE(155)] = 5242,
  [SMALL_STATE(156)] = 5267,
  [SMALL_STATE(157)] = 5292,
  [SMALL_STATE(158)] = 5317,
  [SMALL_STATE(159)] = 5342,
  [SMALL_STATE(160)] = 5367,
  [SMALL_STATE(161)] = 5392,
  [SMALL_STATE(162)] = 5427,
  [SMALL_STATE(163)] = 5462,
  [SMALL_STATE(164)] = 5487,
  [SMALL_STATE(165)] = 5505,
  [SMALL_STATE(166)] = 5523,
  [SMALL_STATE(167)] = 5557,
  [SMALL_STATE(168)] = 5575,
  [SMALL_STATE(169)] = 5593,
  [SMALL_STATE(170)] = 5611,
  [SMALL_STATE(171)] = 5629,
  [SMALL_STATE(172)] = 5647,
  [SMALL_STATE(173)] = 5665,
  [SMALL_STATE(174)] = 5686,
  [SMALL_STATE(175)] = 5704,
  [SMALL_STATE(176)] = 5722,
  [SMALL_STATE(177)] = 5737,
  [SMALL_STATE(178)] = 5752,
  [SMALL_STATE(179)] = 5773,
  [SMALL_STATE(180)] = 5794,
  [SMALL_STATE(181)] = 5817,
  [SMALL_STATE(182)] = 5832,
  [SMALL_STATE(183)] = 5847,
  [SMALL_STATE(184)] = 5862,
  [SMALL_STATE(185)] = 5877,
  [SMALL_STATE(186)] = 5898,
  [SMALL_STATE(187)] = 5921,
  [SMALL_STATE(188)] = 5936,
  [SMALL_STATE(189)] = 5957,
  [SMALL_STATE(190)] = 5972,
  [SMALL_STATE(191)] = 5987,
  [SMALL_STATE(192)] = 6002,
  [SMALL_STATE(193)] = 6017,
  [SMALL_STATE(194)] = 6038,
  [SMALL_STATE(195)] = 6058,
  [SMALL_STATE(196)] = 6070,
  [SMALL_STATE(197)] = 6082,
  [SMALL_STATE(198)] = 6094,
  [SMALL_STATE(199)] = 6106,
  [SMALL_STATE(200)] = 6126,
  [SMALL_STATE(201)] = 6138,
  [SMALL_STATE(202)] = 6150,
  [SMALL_STATE(203)] = 6163,
  [SMALL_STATE(204)] = 6182,
  [SMALL_STATE(205)] = 6201,
  [SMALL_STATE(206)] = 6220,
  [SMALL_STATE(207)] = 6235,
  [SMALL_STATE(208)] = 6250,
  [SMALL_STATE(209)] = 6265,
  [SMALL_STATE(210)] = 6284,
  [SMALL_STATE(211)] = 6299,
  [SMALL_STATE(212)] = 6316,
  [SMALL_STATE(213)] = 6331,
  [SMALL_STATE(214)] = 6346,
  [SMALL_STATE(215)] = 6361,
  [SMALL_STATE(216)] = 6378,
  [SMALL_STATE(217)] = 6388,
  [SMALL_STATE(218)] = 6402,
  [SMALL_STATE(219)] = 6416,
  [SMALL_STATE(220)] = 6428,
  [SMALL_STATE(221)] = 6442,
  [SMALL_STATE(222)] = 6456,
  [SMALL_STATE(223)] = 6470,
  [SMALL_STATE(224)] = 6480,
  [SMALL_STATE(225)] = 6494,
  [SMALL_STATE(226)] = 6508,
  [SMALL_STATE(227)] = 6524,
  [SMALL_STATE(228)] = 6534,
  [SMALL_STATE(229)] = 6548,
  [SMALL_STATE(230)] = 6564,
  [SMALL_STATE(231)] = 6578,
  [SMALL_STATE(232)] = 6588,
  [SMALL_STATE(233)] = 6601,
  [SMALL_STATE(234)] = 6614,
  [SMALL_STATE(235)] = 6627,
  [SMALL_STATE(236)] = 6640,
  [SMALL_STATE(237)] = 6653,
  [SMALL_STATE(238)] = 6666,
  [SMALL_STATE(239)] = 6679,
  [SMALL_STATE(240)] = 6692,
  [SMALL_STATE(241)] = 6703,
  [SMALL_STATE(242)] = 6713,
  [SMALL_STATE(243)] = 6723,
  [SMALL_STATE(244)] = 6733,
  [SMALL_STATE(245)] = 6743,
  [SMALL_STATE(246)] = 6753,
  [SMALL_STATE(247)] = 6763,
  [SMALL_STATE(248)] = 6773,
  [SMALL_STATE(249)] = 6783,
  [SMALL_STATE(250)] = 6793,
  [SMALL_STATE(251)] = 6803,
  [SMALL_STATE(252)] = 6810,
  [SMALL_STATE(253)] = 6817,
  [SMALL_STATE(254)] = 6824,
  [SMALL_STATE(255)] = 6831,
  [SMALL_STATE(256)] = 6838,
  [SMALL_STATE(257)] = 6845,
  [SMALL_STATE(258)] = 6852,
  [SMALL_STATE(259)] = 6859,
  [SMALL_STATE(260)] = 6866,
  [SMALL_STATE(261)] = 6873,
  [SMALL_STATE(262)] = 6880,
  [SMALL_STATE(263)] = 6887,
  [SMALL_STATE(264)] = 6894,
  [SMALL_STATE(265)] = 6901,
  [SMALL_STATE(266)] = 6908,
  [SMALL_STATE(267)] = 6915,
  [SMALL_STATE(268)] = 6922,
  [SMALL_STATE(269)] = 6929,
  [SMALL_STATE(270)] = 6936,
  [SMALL_STATE(271)] = 6943,
  [SMALL_STATE(272)] = 6950,
  [SMALL_STATE(273)] = 6957,
  [SMALL_STATE(274)] = 6964,
  [SMALL_STATE(275)] = 6971,
  [SMALL_STATE(276)] = 6978,
  [SMALL_STATE(277)] = 6985,
  [SMALL_STATE(278)] = 6992,
  [SMALL_STATE(279)] = 6999,
  [SMALL_STATE(280)] = 7006,
  [SMALL_STATE(281)] = 7013,
  [SMALL_STATE(282)] = 7020,
  [SMALL_STATE(283)] = 7027,
  [SMALL_STATE(284)] = 7034,
  [SMALL_STATE(285)] = 7041,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(116),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(159),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(106),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(235),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(256),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(254),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(160),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(142),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(125),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(255),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(258),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(280),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(282),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(252),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(151),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(120),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(114),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(157),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(236),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(284),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(277),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(142),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(125),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(255),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(258),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(280),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(282),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(252),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(150),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(123),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(264),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(119),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(102),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(82),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(65),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(102),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(264),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(82),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(65),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_color_statement, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_color_statement, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(113),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(112),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(244),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(241),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(149),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(25),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [906] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
