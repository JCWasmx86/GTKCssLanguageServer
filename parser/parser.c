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
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 2,
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 24,
  [37] = 30,
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
  [53] = 52,
  [54] = 51,
  [55] = 50,
  [56] = 47,
  [57] = 43,
  [58] = 48,
  [59] = 25,
  [60] = 40,
  [61] = 33,
  [62] = 31,
  [63] = 34,
  [64] = 28,
  [65] = 35,
  [66] = 39,
  [67] = 26,
  [68] = 27,
  [69] = 46,
  [70] = 29,
  [71] = 49,
  [72] = 45,
  [73] = 41,
  [74] = 42,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 85,
  [95] = 93,
  [96] = 85,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 105,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 103,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 114,
  [117] = 104,
  [118] = 118,
  [119] = 105,
  [120] = 120,
  [121] = 120,
  [122] = 122,
  [123] = 104,
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
  [135] = 135,
  [136] = 136,
  [137] = 78,
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
  [151] = 151,
  [152] = 152,
  [153] = 82,
  [154] = 81,
  [155] = 155,
  [156] = 98,
  [157] = 157,
  [158] = 157,
  [159] = 159,
  [160] = 149,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 86,
  [165] = 84,
  [166] = 97,
  [167] = 90,
  [168] = 88,
  [169] = 87,
  [170] = 89,
  [171] = 171,
  [172] = 91,
  [173] = 78,
  [174] = 81,
  [175] = 82,
  [176] = 88,
  [177] = 177,
  [178] = 91,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 177,
  [183] = 183,
  [184] = 90,
  [185] = 89,
  [186] = 186,
  [187] = 183,
  [188] = 84,
  [189] = 186,
  [190] = 97,
  [191] = 98,
  [192] = 86,
  [193] = 87,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 197,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 204,
  [207] = 207,
  [208] = 207,
  [209] = 209,
  [210] = 210,
  [211] = 209,
  [212] = 202,
  [213] = 213,
  [214] = 214,
  [215] = 204,
  [216] = 216,
  [217] = 34,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 218,
  [224] = 224,
  [225] = 42,
  [226] = 219,
  [227] = 222,
  [228] = 220,
  [229] = 220,
  [230] = 230,
  [231] = 25,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 233,
  [239] = 234,
  [240] = 240,
  [241] = 81,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 242,
  [248] = 243,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 256,
  [259] = 259,
  [260] = 253,
  [261] = 261,
  [262] = 257,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 263,
  [267] = 267,
  [268] = 253,
  [269] = 269,
  [270] = 264,
  [271] = 261,
  [272] = 272,
  [273] = 264,
  [274] = 274,
  [275] = 275,
  [276] = 267,
  [277] = 265,
  [278] = 259,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 261,
  [283] = 283,
  [284] = 252,
  [285] = 285,
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
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(190);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '_') ADVANCE(207);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '{') ADVANCE(84);
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
      if (lookahead == '/') ADVANCE(267);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
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
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(114);
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
      if (lookahead == 'm') ADVANCE(86);
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
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(87);
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
      if (lookahead == 'r') ADVANCE(122);
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
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 67:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(25);
      END_STATE();
    case 68:
      if (!sym_plain_value_character_set_1(lookahead)) ADVANCE(268);
      END_STATE();
    case 69:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(6);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(70);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(109);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(28);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(32);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATdefine_DASHcolor);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == 'y') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(190);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(25);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == 'k') ADVANCE(227);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 's') ADVANCE(224);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'y') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(68);
      if (!sym_plain_value_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3, .external_lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 2, .external_lex_state = 1},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 72},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 72},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 72},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 72},
  [60] = {.lex_state = 72},
  [61] = {.lex_state = 72},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 72},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
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
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 72, .external_lex_state = 1},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 72, .external_lex_state = 1},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 72, .external_lex_state = 1},
  [125] = {.lex_state = 72, .external_lex_state = 1},
  [126] = {.lex_state = 72, .external_lex_state = 1},
  [127] = {.lex_state = 72, .external_lex_state = 1},
  [128] = {.lex_state = 72, .external_lex_state = 1},
  [129] = {.lex_state = 72, .external_lex_state = 1},
  [130] = {.lex_state = 72, .external_lex_state = 1},
  [131] = {.lex_state = 72, .external_lex_state = 1},
  [132] = {.lex_state = 72, .external_lex_state = 1},
  [133] = {.lex_state = 72, .external_lex_state = 1},
  [134] = {.lex_state = 72, .external_lex_state = 1},
  [135] = {.lex_state = 72, .external_lex_state = 1},
  [136] = {.lex_state = 72, .external_lex_state = 1},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 72, .external_lex_state = 1},
  [139] = {.lex_state = 72, .external_lex_state = 1},
  [140] = {.lex_state = 72, .external_lex_state = 1},
  [141] = {.lex_state = 72, .external_lex_state = 1},
  [142] = {.lex_state = 72, .external_lex_state = 1},
  [143] = {.lex_state = 72, .external_lex_state = 1},
  [144] = {.lex_state = 72, .external_lex_state = 1},
  [145] = {.lex_state = 72, .external_lex_state = 1},
  [146] = {.lex_state = 72, .external_lex_state = 1},
  [147] = {.lex_state = 72, .external_lex_state = 1},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 72, .external_lex_state = 1},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 72, .external_lex_state = 1},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 72, .external_lex_state = 1},
  [162] = {.lex_state = 72, .external_lex_state = 1},
  [163] = {.lex_state = 72, .external_lex_state = 1},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 12},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 72, .external_lex_state = 1},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 72},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 72},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 72},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 72},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 72},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 72},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 72},
  [252] = {.lex_state = 72},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 72},
  [255] = {.lex_state = 72},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 24},
  [265] = {.lex_state = 72},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 72},
  [270] = {.lex_state = 24},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 24},
  [274] = {.lex_state = 72},
  [275] = {.lex_state = 72},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 72},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 72},
  [281] = {.lex_state = 72},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 72},
  [284] = {.lex_state = 72},
  [285] = {.lex_state = 72},
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
    [sym_stylesheet] = STATE(279),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_define_color_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(247),
    [sym__selector] = STATE(133),
    [sym_universal_selector] = STATE(133),
    [sym_class_selector] = STATE(133),
    [sym_pseudo_class_selector] = STATE(133),
    [sym_pseudo_element_selector] = STATE(133),
    [sym_id_selector] = STATE(133),
    [sym_attribute_selector] = STATE(133),
    [sym_child_selector] = STATE(133),
    [sym_descendant_selector] = STATE(133),
    [sym_sibling_selector] = STATE(133),
    [sym_adjacent_sibling_selector] = STATE(133),
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
    STATE(242), 1,
      sym_selectors,
    STATE(271), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(133), 11,
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
    STATE(242), 1,
      sym_selectors,
    STATE(268), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(2), 11,
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
    STATE(133), 11,
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
    STATE(242), 1,
      sym_selectors,
    STATE(261), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(133), 11,
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
    STATE(242), 1,
      sym_selectors,
    STATE(253), 1,
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
    STATE(133), 11,
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
    STATE(242), 1,
      sym_selectors,
    STATE(260), 1,
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
    STATE(133), 11,
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
    STATE(242), 1,
      sym_selectors,
    STATE(282), 1,
      sym_last_declaration,
    ACTIONS(21), 2,
      sym_nesting_selector,
      sym_string_value,
    ACTIONS(49), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
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
      aux_sym_block_repeat1,
    STATE(133), 11,
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
      anon_sym_ATimport,
    ACTIONS(72), 1,
      anon_sym_ATmedia,
    ACTIONS(75), 1,
      anon_sym_ATcharset,
    ACTIONS(78), 1,
      anon_sym_ATnamespace,
    ACTIONS(81), 1,
      anon_sym_ATdefine_DASHcolor,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
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
    STATE(242), 1,
      sym_selectors,
    ACTIONS(84), 2,
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
      aux_sym_block_repeat1,
    STATE(133), 11,
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
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_ATimport,
    ACTIONS(124), 1,
      anon_sym_ATmedia,
    ACTIONS(127), 1,
      anon_sym_ATcharset,
    ACTIONS(130), 1,
      anon_sym_ATnamespace,
    ACTIONS(133), 1,
      anon_sym_ATdefine_DASHcolor,
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
    STATE(247), 1,
      sym_selectors,
    ACTIONS(136), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(133), 11,
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
    STATE(247), 1,
      sym_selectors,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    ACTIONS(21), 2,
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
      aux_sym_stylesheet_repeat1,
    STATE(133), 11,
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
  [792] = 18,
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
      sym_plain_value,
    STATE(77), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(145), 11,
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
  [863] = 17,
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
      sym_plain_value,
    ACTIONS(191), 1,
      sym_nesting_selector,
    STATE(83), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(155), 11,
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
  [931] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_important,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    STATE(44), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [988] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(213), 1,
      sym_important,
    STATE(80), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_arguments,
    ACTIONS(217), 2,
      anon_sym_STAR,
      sym_string_value,
    ACTIONS(219), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(223), 7,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(215), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1080] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      sym_important,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1134] = 10,
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
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(229), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(152), 11,
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
  [1176] = 10,
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
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(127), 11,
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
  [1218] = 10,
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
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(235), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(128), 11,
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
  [1260] = 10,
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
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(237), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(147), 11,
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
  [1302] = 10,
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
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(239), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(171), 11,
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
  [1344] = 10,
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
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(241), 2,
      sym_nesting_selector,
      sym_string_value,
    STATE(129), 11,
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
  [1386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_STAR,
      anon_sym_LPAREN2,
      sym_string_value,
    ACTIONS(247), 3,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PLUS,
    ACTIONS(249), 6,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(243), 8,
      sym__descendant_operator,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(251), 10,
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
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(257), 10,
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
  [1472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(261), 10,
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
  [1499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(265), 10,
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
  [1526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(269), 10,
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
  [1553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(273), 10,
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
  [1580] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      sym_string_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(220), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(283), 10,
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
  [1654] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(228), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(289), 10,
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
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 9,
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
  [1755] = 3,
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
  [1782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(251), 10,
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
  [1809] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(229), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1856] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      sym_string_value,
    ACTIONS(315), 1,
      aux_sym_integer_value_token1,
    ACTIONS(318), 1,
      aux_sym_float_value_token1,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(324), 1,
      sym_plain_value,
    STATE(38), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(304), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_important,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [1901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(329), 10,
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
  [1928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(333), 10,
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
  [1955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(337), 10,
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
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(341), 10,
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
  [2009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(345), 10,
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
  [2036] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym_important,
    STATE(38), 1,
      aux_sym_declaration_repeat1,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(355), 10,
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
  [2112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(359), 10,
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
  [2139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(361), 10,
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
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(365), 10,
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
  [2193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(369), 10,
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
  [2220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(375), 10,
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
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(379), 10,
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
    ACTIONS(383), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(381), 10,
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
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(381), 10,
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
    ACTIONS(377), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(379), 10,
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
    ACTIONS(373), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(375), 10,
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
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(361), 10,
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
    ACTIONS(343), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(345), 10,
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
    ACTIONS(367), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(365), 10,
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
    ACTIONS(255), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(257), 10,
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
    ACTIONS(331), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(333), 10,
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
    ACTIONS(287), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(289), 10,
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
    ACTIONS(281), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(283), 10,
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
    ACTIONS(291), 9,
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
  [2598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(269), 10,
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
  [2652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(329), 10,
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
    ACTIONS(259), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(261), 10,
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
    ACTIONS(263), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(265), 10,
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
  [2733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(359), 10,
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
  [2760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(273), 10,
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
  [2787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(369), 10,
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
  [2814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(355), 10,
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
  [2841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(337), 10,
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
  [2868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 9,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      sym_string_value,
      sym_identifier,
    ACTIONS(341), 10,
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
  [2895] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2937] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      sym_important,
    STATE(38), 1,
      aux_sym_declaration_repeat1,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [2983] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(236), 1,
      aux_sym_pseudo_class_arguments_repeat2,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_arguments,
    ACTIONS(217), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      sym_string_value,
    ACTIONS(223), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [3059] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_POUND,
    ACTIONS(400), 1,
      anon_sym_LPAREN2,
    ACTIONS(403), 1,
      sym_string_value,
    ACTIONS(406), 1,
      aux_sym_integer_value_token1,
    ACTIONS(409), 1,
      aux_sym_float_value_token1,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(415), 1,
      sym_plain_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(395), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3101] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      sym_string_value,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(211), 1,
      sym_plain_value,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      sym_important,
    STATE(38), 1,
      aux_sym_declaration_repeat1,
    STATE(99), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3147] = 4,
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
    ACTIONS(420), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3174] = 4,
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
    ACTIONS(426), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3201] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3242] = 3,
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
    ACTIONS(434), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3266] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(440), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(444), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(448), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(452), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(456), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(460), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3450] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3490] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(468), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(212), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3526] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3566] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    ACTIONS(468), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(476), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(202), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [3602] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(486), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(490), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(496), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(494), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3717] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    STATE(75), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3754] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(189), 1,
      sym_plain_value,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_string_value,
    STATE(92), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(111), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(498), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(304), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      sym_string_value,
  [3818] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(504), 1,
      sym_string_value,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(512), 1,
      sym_plain_value,
    STATE(208), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3852] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(514), 1,
      sym_string_value,
    ACTIONS(516), 1,
      sym_plain_value,
    STATE(206), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3886] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(518), 1,
      sym_string_value,
    ACTIONS(520), 1,
      sym_plain_value,
    STATE(89), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3920] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(526), 1,
      sym_string_value,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(534), 1,
      sym_plain_value,
    STATE(95), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3954] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(536), 1,
      sym_string_value,
    ACTIONS(538), 1,
      sym_plain_value,
    STATE(93), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [3988] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_string_value,
    ACTIONS(542), 1,
      sym_plain_value,
    STATE(185), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4022] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(544), 1,
      sym_string_value,
    ACTIONS(546), 1,
      sym_plain_value,
    STATE(213), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COLON,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_pseudo_class_arguments,
    ACTIONS(548), 11,
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
  [4082] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_STAR,
    ACTIONS(203), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(556), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(554), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_string_value,
  [4108] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(558), 1,
      sym_string_value,
    ACTIONS(560), 1,
      sym_plain_value,
    STATE(207), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      anon_sym_COLON,
    STATE(144), 1,
      sym_pseudo_class_arguments,
    ACTIONS(562), 11,
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
  [4168] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(566), 1,
      anon_sym_SEMI,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(182), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4202] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(570), 1,
      sym_string_value,
    ACTIONS(572), 1,
      sym_plain_value,
    STATE(102), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4236] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_block,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(177), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [4270] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_string_value,
    ACTIONS(580), 1,
      sym_plain_value,
    STATE(204), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4304] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(582), 1,
      sym_string_value,
    ACTIONS(584), 1,
      sym_plain_value,
    STATE(210), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4338] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(524), 1,
      anon_sym_LPAREN2,
    ACTIONS(528), 1,
      aux_sym_integer_value_token1,
    ACTIONS(530), 1,
      aux_sym_float_value_token1,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(586), 1,
      sym_string_value,
    ACTIONS(588), 1,
      sym_plain_value,
    STATE(170), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4372] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(590), 1,
      sym_string_value,
    ACTIONS(592), 1,
      sym_plain_value,
    STATE(16), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4406] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(594), 1,
      sym_string_value,
    ACTIONS(596), 1,
      sym_plain_value,
    STATE(14), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4440] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN2,
    ACTIONS(183), 1,
      aux_sym_integer_value_token1,
    ACTIONS(185), 1,
      aux_sym_float_value_token1,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_string_value,
    ACTIONS(600), 1,
      sym_plain_value,
    STATE(13), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4474] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN2,
    ACTIONS(506), 1,
      aux_sym_integer_value_token1,
    ACTIONS(508), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      sym_identifier,
    ACTIONS(602), 1,
      sym_string_value,
    ACTIONS(604), 1,
      sym_plain_value,
    STATE(215), 7,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_call_expression,
      sym_binary_expression,
  [4508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON,
    ACTIONS(606), 11,
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
  [4528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(610), 11,
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
  [4548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_COLON,
    ACTIONS(614), 11,
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
  [4568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(622), 1,
      anon_sym_COLON,
    ACTIONS(618), 10,
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
  [4590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(626), 1,
      anon_sym_COLON,
    ACTIONS(624), 10,
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
  [4612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(630), 1,
      anon_sym_COLON,
    ACTIONS(628), 10,
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
  [4634] = 3,
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
  [4654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_COLON,
    ACTIONS(636), 11,
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
  [4674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(640), 11,
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
  [4694] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_COLON,
    ACTIONS(652), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      anon_sym_TILDE,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      sym__descendant_operator,
    STATE(232), 1,
      aux_sym_selectors_repeat1,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_COLON,
    ACTIONS(664), 11,
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
  [4754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_COLON,
    ACTIONS(668), 11,
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
  [4774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_COLON,
    ACTIONS(672), 11,
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
  [4794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_arguments,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(223), 7,
      anon_sym_LPAREN2,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [4818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(215), 11,
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
  [4838] = 3,
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
  [4858] = 3,
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
  [4878] = 3,
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
  [4898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COLON,
    ACTIONS(690), 11,
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
  [4918] = 3,
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
  [4938] = 3,
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
  [4958] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_COLON,
    ACTIONS(652), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      anon_sym_TILDE,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      sym__descendant_operator,
    STATE(236), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [4998] = 3,
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
  [5018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(706), 10,
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
  [5040] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(214), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(223), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(198), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(237), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5140] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_COLON,
    ACTIONS(652), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      anon_sym_TILDE,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      sym__descendant_operator,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [5175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
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
  [5196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
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
  [5217] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_COLON,
    ACTIONS(652), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      anon_sym_TILDE,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      sym__descendant_operator,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(492), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(200), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(197), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(196), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LPAREN2,
    ACTIONS(474), 1,
      anon_sym_selector,
    ACTIONS(478), 1,
      sym_identifier,
    ACTIONS(472), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(218), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [5371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_COLON,
    ACTIONS(215), 10,
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
  [5390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_COLON,
    ACTIONS(215), 10,
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
  [5409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_COLON,
    ACTIONS(215), 10,
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
  [5428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(442), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5446] = 3,
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
  [5464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(488), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(458), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(450), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(446), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(454), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5554] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(648), 1,
      anon_sym_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_COLON,
    ACTIONS(652), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      anon_sym_GT,
    ACTIONS(658), 1,
      anon_sym_TILDE,
    ACTIONS(660), 1,
      anon_sym_PLUS,
    ACTIONS(662), 1,
      sym__descendant_operator,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [5588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(462), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [5606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SLASH,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_arguments,
    ACTIONS(217), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SLASH,
    ACTIONS(730), 1,
      sym_unit,
    ACTIONS(420), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_SLASH,
    ACTIONS(732), 1,
      sym_unit,
    ACTIONS(426), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_SLASH,
    ACTIONS(448), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5678] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_block,
    STATE(203), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [5701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_SLASH,
    ACTIONS(460), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      aux_sym_integer_value_token1,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(742), 2,
      sym_from,
      sym_to,
    STATE(179), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RBRACK,
    ACTIONS(748), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    ACTIONS(752), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
  [5767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_block,
    STATE(205), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [5790] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      aux_sym_integer_value_token1,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(760), 2,
      sym_from,
      sym_to,
    STATE(179), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_SLASH,
    ACTIONS(456), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SLASH,
    ACTIONS(452), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5841] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      aux_sym_integer_value_token1,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(760), 2,
      sym_from,
      sym_to,
    STATE(183), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      aux_sym_integer_value_token1,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(760), 2,
      sym_from,
      sym_to,
    STATE(179), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5883] = 3,
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
  [5898] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      aux_sym_integer_value_token1,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      sym_integer_value,
    ACTIONS(760), 2,
      sym_from,
      sym_to,
    STATE(187), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [5919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SLASH,
    ACTIONS(486), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SLASH,
    ACTIONS(490), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SLASH,
    ACTIONS(440), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_SLASH,
    ACTIONS(444), 6,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [5979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [5991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_block,
    STATE(222), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_block,
    STATE(227), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      anon_sym_SEMI,
    STATE(234), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(798), 1,
      anon_sym_SEMI,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      sym_string_value,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(169), 1,
      sym_arguments,
    STATE(262), 1,
      sym_call_expression,
  [6225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_identifier,
    ACTIONS(806), 1,
      sym_string_value,
    STATE(169), 1,
      sym_arguments,
    STATE(257), 1,
      sym_call_expression,
  [6259] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(808), 1,
      anon_sym_SEMI,
    STATE(239), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(810), 1,
      anon_sym_RBRACK,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(812), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_SLASH,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(786), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(812), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [6333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(256), 2,
      sym_color_value,
      sym_call_expression,
  [6371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(823), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      sym_identifier,
    STATE(258), 2,
      sym_color_value,
      sym_call_expression,
  [6463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym_block,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [6507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_COLON,
    ACTIONS(778), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [6519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [6529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(240), 1,
      aux_sym_selectors_repeat1,
  [6542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_string_value,
    ACTIONS(836), 1,
      sym_identifier,
    STATE(276), 1,
      sym_call_expression,
  [6555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_pseudo_class_arguments_repeat2,
  [6594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 2,
      anon_sym_and,
      anon_sym_or,
  [6605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_string_value,
    ACTIONS(849), 1,
      sym_identifier,
    STATE(267), 1,
      sym_call_expression,
  [6618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    STATE(216), 1,
      aux_sym_import_statement_repeat1,
  [6631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_selectors_repeat1,
  [6644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      sym_unit,
  [6654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
  [6664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_keyframe_block_list,
  [6674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      aux_sym_color_value_token1,
    ACTIONS(862), 1,
      sym_identifier,
  [6684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_arguments,
  [6694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_block,
  [6704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [6714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_keyframe_block_list,
  [6724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
  [6734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
  [6744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym_identifier,
  [6751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_identifier,
  [6758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [6765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_identifier,
  [6772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_identifier,
  [6779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_SEMI,
  [6786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_SEMI,
  [6793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_SEMI,
  [6800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [6807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [6814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [6821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_SEMI,
  [6828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_SEMI,
  [6835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym_color_value_token1,
  [6842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym_identifier,
  [6849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_SEMI,
  [6856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      anon_sym_SEMI,
  [6863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
  [6870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_identifier,
  [6877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      aux_sym_color_value_token1,
  [6884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [6891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_LPAREN2,
  [6898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      aux_sym_color_value_token1,
  [6905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_identifier,
  [6912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
  [6919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_SEMI,
  [6926] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      sym_identifier,
  [6933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [6940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
  [6947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_identifier,
  [6954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_identifier,
  [6961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
  [6968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      sym_identifier,
  [6975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [6982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      sym_identifier,
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
  [SMALL_STATE(12)] = 863,
  [SMALL_STATE(13)] = 931,
  [SMALL_STATE(14)] = 988,
  [SMALL_STATE(15)] = 1042,
  [SMALL_STATE(16)] = 1080,
  [SMALL_STATE(17)] = 1134,
  [SMALL_STATE(18)] = 1176,
  [SMALL_STATE(19)] = 1218,
  [SMALL_STATE(20)] = 1260,
  [SMALL_STATE(21)] = 1302,
  [SMALL_STATE(22)] = 1344,
  [SMALL_STATE(23)] = 1386,
  [SMALL_STATE(24)] = 1418,
  [SMALL_STATE(25)] = 1445,
  [SMALL_STATE(26)] = 1472,
  [SMALL_STATE(27)] = 1499,
  [SMALL_STATE(28)] = 1526,
  [SMALL_STATE(29)] = 1553,
  [SMALL_STATE(30)] = 1580,
  [SMALL_STATE(31)] = 1627,
  [SMALL_STATE(32)] = 1654,
  [SMALL_STATE(33)] = 1701,
  [SMALL_STATE(34)] = 1728,
  [SMALL_STATE(35)] = 1755,
  [SMALL_STATE(36)] = 1782,
  [SMALL_STATE(37)] = 1809,
  [SMALL_STATE(38)] = 1856,
  [SMALL_STATE(39)] = 1901,
  [SMALL_STATE(40)] = 1928,
  [SMALL_STATE(41)] = 1955,
  [SMALL_STATE(42)] = 1982,
  [SMALL_STATE(43)] = 2009,
  [SMALL_STATE(44)] = 2036,
  [SMALL_STATE(45)] = 2085,
  [SMALL_STATE(46)] = 2112,
  [SMALL_STATE(47)] = 2139,
  [SMALL_STATE(48)] = 2166,
  [SMALL_STATE(49)] = 2193,
  [SMALL_STATE(50)] = 2220,
  [SMALL_STATE(51)] = 2247,
  [SMALL_STATE(52)] = 2274,
  [SMALL_STATE(53)] = 2301,
  [SMALL_STATE(54)] = 2328,
  [SMALL_STATE(55)] = 2355,
  [SMALL_STATE(56)] = 2382,
  [SMALL_STATE(57)] = 2409,
  [SMALL_STATE(58)] = 2436,
  [SMALL_STATE(59)] = 2463,
  [SMALL_STATE(60)] = 2490,
  [SMALL_STATE(61)] = 2517,
  [SMALL_STATE(62)] = 2544,
  [SMALL_STATE(63)] = 2571,
  [SMALL_STATE(64)] = 2598,
  [SMALL_STATE(65)] = 2625,
  [SMALL_STATE(66)] = 2652,
  [SMALL_STATE(67)] = 2679,
  [SMALL_STATE(68)] = 2706,
  [SMALL_STATE(69)] = 2733,
  [SMALL_STATE(70)] = 2760,
  [SMALL_STATE(71)] = 2787,
  [SMALL_STATE(72)] = 2814,
  [SMALL_STATE(73)] = 2841,
  [SMALL_STATE(74)] = 2868,
  [SMALL_STATE(75)] = 2895,
  [SMALL_STATE(76)] = 2937,
  [SMALL_STATE(77)] = 2983,
  [SMALL_STATE(78)] = 3029,
  [SMALL_STATE(79)] = 3059,
  [SMALL_STATE(80)] = 3101,
  [SMALL_STATE(81)] = 3147,
  [SMALL_STATE(82)] = 3174,
  [SMALL_STATE(83)] = 3201,
  [SMALL_STATE(84)] = 3242,
  [SMALL_STATE(85)] = 3266,
  [SMALL_STATE(86)] = 3306,
  [SMALL_STATE(87)] = 3330,
  [SMALL_STATE(88)] = 3354,
  [SMALL_STATE(89)] = 3378,
  [SMALL_STATE(90)] = 3402,
  [SMALL_STATE(91)] = 3426,
  [SMALL_STATE(92)] = 3450,
  [SMALL_STATE(93)] = 3490,
  [SMALL_STATE(94)] = 3526,
  [SMALL_STATE(95)] = 3566,
  [SMALL_STATE(96)] = 3602,
  [SMALL_STATE(97)] = 3642,
  [SMALL_STATE(98)] = 3666,
  [SMALL_STATE(99)] = 3690,
  [SMALL_STATE(100)] = 3717,
  [SMALL_STATE(101)] = 3754,
  [SMALL_STATE(102)] = 3791,
  [SMALL_STATE(103)] = 3818,
  [SMALL_STATE(104)] = 3852,
  [SMALL_STATE(105)] = 3886,
  [SMALL_STATE(106)] = 3920,
  [SMALL_STATE(107)] = 3954,
  [SMALL_STATE(108)] = 3988,
  [SMALL_STATE(109)] = 4022,
  [SMALL_STATE(110)] = 4056,
  [SMALL_STATE(111)] = 4082,
  [SMALL_STATE(112)] = 4108,
  [SMALL_STATE(113)] = 4142,
  [SMALL_STATE(114)] = 4168,
  [SMALL_STATE(115)] = 4202,
  [SMALL_STATE(116)] = 4236,
  [SMALL_STATE(117)] = 4270,
  [SMALL_STATE(118)] = 4304,
  [SMALL_STATE(119)] = 4338,
  [SMALL_STATE(120)] = 4372,
  [SMALL_STATE(121)] = 4406,
  [SMALL_STATE(122)] = 4440,
  [SMALL_STATE(123)] = 4474,
  [SMALL_STATE(124)] = 4508,
  [SMALL_STATE(125)] = 4528,
  [SMALL_STATE(126)] = 4548,
  [SMALL_STATE(127)] = 4568,
  [SMALL_STATE(128)] = 4590,
  [SMALL_STATE(129)] = 4612,
  [SMALL_STATE(130)] = 4634,
  [SMALL_STATE(131)] = 4654,
  [SMALL_STATE(132)] = 4674,
  [SMALL_STATE(133)] = 4694,
  [SMALL_STATE(134)] = 4734,
  [SMALL_STATE(135)] = 4754,
  [SMALL_STATE(136)] = 4774,
  [SMALL_STATE(137)] = 4794,
  [SMALL_STATE(138)] = 4818,
  [SMALL_STATE(139)] = 4838,
  [SMALL_STATE(140)] = 4858,
  [SMALL_STATE(141)] = 4878,
  [SMALL_STATE(142)] = 4898,
  [SMALL_STATE(143)] = 4918,
  [SMALL_STATE(144)] = 4938,
  [SMALL_STATE(145)] = 4958,
  [SMALL_STATE(146)] = 4998,
  [SMALL_STATE(147)] = 5018,
  [SMALL_STATE(148)] = 5040,
  [SMALL_STATE(149)] = 5065,
  [SMALL_STATE(150)] = 5090,
  [SMALL_STATE(151)] = 5115,
  [SMALL_STATE(152)] = 5140,
  [SMALL_STATE(153)] = 5175,
  [SMALL_STATE(154)] = 5196,
  [SMALL_STATE(155)] = 5217,
  [SMALL_STATE(156)] = 5252,
  [SMALL_STATE(157)] = 5271,
  [SMALL_STATE(158)] = 5296,
  [SMALL_STATE(159)] = 5321,
  [SMALL_STATE(160)] = 5346,
  [SMALL_STATE(161)] = 5371,
  [SMALL_STATE(162)] = 5390,
  [SMALL_STATE(163)] = 5409,
  [SMALL_STATE(164)] = 5428,
  [SMALL_STATE(165)] = 5446,
  [SMALL_STATE(166)] = 5464,
  [SMALL_STATE(167)] = 5482,
  [SMALL_STATE(168)] = 5500,
  [SMALL_STATE(169)] = 5518,
  [SMALL_STATE(170)] = 5536,
  [SMALL_STATE(171)] = 5554,
  [SMALL_STATE(172)] = 5588,
  [SMALL_STATE(173)] = 5606,
  [SMALL_STATE(174)] = 5627,
  [SMALL_STATE(175)] = 5645,
  [SMALL_STATE(176)] = 5663,
  [SMALL_STATE(177)] = 5678,
  [SMALL_STATE(178)] = 5701,
  [SMALL_STATE(179)] = 5716,
  [SMALL_STATE(180)] = 5737,
  [SMALL_STATE(181)] = 5752,
  [SMALL_STATE(182)] = 5767,
  [SMALL_STATE(183)] = 5790,
  [SMALL_STATE(184)] = 5811,
  [SMALL_STATE(185)] = 5826,
  [SMALL_STATE(186)] = 5841,
  [SMALL_STATE(187)] = 5862,
  [SMALL_STATE(188)] = 5883,
  [SMALL_STATE(189)] = 5898,
  [SMALL_STATE(190)] = 5919,
  [SMALL_STATE(191)] = 5934,
  [SMALL_STATE(192)] = 5949,
  [SMALL_STATE(193)] = 5964,
  [SMALL_STATE(194)] = 5979,
  [SMALL_STATE(195)] = 5991,
  [SMALL_STATE(196)] = 6003,
  [SMALL_STATE(197)] = 6015,
  [SMALL_STATE(198)] = 6035,
  [SMALL_STATE(199)] = 6047,
  [SMALL_STATE(200)] = 6059,
  [SMALL_STATE(201)] = 6079,
  [SMALL_STATE(202)] = 6091,
  [SMALL_STATE(203)] = 6108,
  [SMALL_STATE(204)] = 6127,
  [SMALL_STATE(205)] = 6142,
  [SMALL_STATE(206)] = 6161,
  [SMALL_STATE(207)] = 6176,
  [SMALL_STATE(208)] = 6191,
  [SMALL_STATE(209)] = 6206,
  [SMALL_STATE(210)] = 6225,
  [SMALL_STATE(211)] = 6240,
  [SMALL_STATE(212)] = 6259,
  [SMALL_STATE(213)] = 6276,
  [SMALL_STATE(214)] = 6291,
  [SMALL_STATE(215)] = 6304,
  [SMALL_STATE(216)] = 6319,
  [SMALL_STATE(217)] = 6333,
  [SMALL_STATE(218)] = 6343,
  [SMALL_STATE(219)] = 6357,
  [SMALL_STATE(220)] = 6371,
  [SMALL_STATE(221)] = 6385,
  [SMALL_STATE(222)] = 6395,
  [SMALL_STATE(223)] = 6411,
  [SMALL_STATE(224)] = 6425,
  [SMALL_STATE(225)] = 6439,
  [SMALL_STATE(226)] = 6449,
  [SMALL_STATE(227)] = 6463,
  [SMALL_STATE(228)] = 6479,
  [SMALL_STATE(229)] = 6493,
  [SMALL_STATE(230)] = 6507,
  [SMALL_STATE(231)] = 6519,
  [SMALL_STATE(232)] = 6529,
  [SMALL_STATE(233)] = 6542,
  [SMALL_STATE(234)] = 6555,
  [SMALL_STATE(235)] = 6568,
  [SMALL_STATE(236)] = 6581,
  [SMALL_STATE(237)] = 6594,
  [SMALL_STATE(238)] = 6605,
  [SMALL_STATE(239)] = 6618,
  [SMALL_STATE(240)] = 6631,
  [SMALL_STATE(241)] = 6644,
  [SMALL_STATE(242)] = 6654,
  [SMALL_STATE(243)] = 6664,
  [SMALL_STATE(244)] = 6674,
  [SMALL_STATE(245)] = 6684,
  [SMALL_STATE(246)] = 6694,
  [SMALL_STATE(247)] = 6704,
  [SMALL_STATE(248)] = 6714,
  [SMALL_STATE(249)] = 6724,
  [SMALL_STATE(250)] = 6734,
  [SMALL_STATE(251)] = 6744,
  [SMALL_STATE(252)] = 6751,
  [SMALL_STATE(253)] = 6758,
  [SMALL_STATE(254)] = 6765,
  [SMALL_STATE(255)] = 6772,
  [SMALL_STATE(256)] = 6779,
  [SMALL_STATE(257)] = 6786,
  [SMALL_STATE(258)] = 6793,
  [SMALL_STATE(259)] = 6800,
  [SMALL_STATE(260)] = 6807,
  [SMALL_STATE(261)] = 6814,
  [SMALL_STATE(262)] = 6821,
  [SMALL_STATE(263)] = 6828,
  [SMALL_STATE(264)] = 6835,
  [SMALL_STATE(265)] = 6842,
  [SMALL_STATE(266)] = 6849,
  [SMALL_STATE(267)] = 6856,
  [SMALL_STATE(268)] = 6863,
  [SMALL_STATE(269)] = 6870,
  [SMALL_STATE(270)] = 6877,
  [SMALL_STATE(271)] = 6884,
  [SMALL_STATE(272)] = 6891,
  [SMALL_STATE(273)] = 6898,
  [SMALL_STATE(274)] = 6905,
  [SMALL_STATE(275)] = 6912,
  [SMALL_STATE(276)] = 6919,
  [SMALL_STATE(277)] = 6926,
  [SMALL_STATE(278)] = 6933,
  [SMALL_STATE(279)] = 6940,
  [SMALL_STATE(280)] = 6947,
  [SMALL_STATE(281)] = 6954,
  [SMALL_STATE(282)] = 6961,
  [SMALL_STATE(283)] = 6968,
  [SMALL_STATE(284)] = 6975,
  [SMALL_STATE(285)] = 6982,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(107),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(158),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(238),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(284),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(277),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(160),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(133),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(146),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(280),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(251),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(274),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(283),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(162),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(106),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(157),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(103),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(233),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(252),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(265),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(149),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(133),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(146),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(269),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(280),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(251),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(274),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(283),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(161),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(114),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, .production_id = 14),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, .production_id = 14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, .production_id = 13),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 14),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(264),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(82),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(78),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(99),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_color_statement, 4),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_color_statement, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, .production_id = 14),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, .production_id = 14),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(264),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(123),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(82),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(78),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 4),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, .production_id = 4),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(120),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(121),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(246),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(241),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, .production_id = 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(148),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(100),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(12),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(17),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, .production_id = 14),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [916] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
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
