[CCode (cheader_filename = "tree_sitter/api.h,tree_sitter/parser.h")]
namespace TreeSitter {
	[CCode (cname = "tree_sitter_css")]
	public static TSLanguage tree_sitter_css ();

	[Compact]
	[CCode (has_type_id = false, cname = "TSLanguage", free_function = "")]
	public class TSLanguage {

	}

	[Compact]
	[CCode (has_type_id = false, cname = "TSParser", free_function = "ts_parser_delete")]
	public class TSParser {
		[CCode (cname = "ts_parser_new")]
		public TSParser ();

		[CCode (cname = "ts_parser_set_language")]
		public void set_language (TSLanguage tsl);

		[CCode (cname = "ts_parser_parse_string")]
		public TSTree? parse_string (TSTree? old_tree, string s, uint32 length);
	}

	[Compact]
	[CCode (has_type_id = false, cname = "TSTree", free_function = "")]
	public class TSTree {
		[CCode (cname = "ts_tree_root_node")]
		public TSNode root_node ();

		[CCode (cname = "ts_tree_delete")]
		public void free ();
	}

	[SimpleType]
	[CCode (has_type_id = false, cname = "TSNode", free_function = "")]
	public struct TSNode {
		[CCode (cname = "ts_node_named_child")]
		public TSNode named_child (uint index);

		[CCode (cname = "ts_node_child")]
		public TSNode child (uint index);

		[CCode (cname = "ts_node_type")]
		public unowned string type ();

		[CCode (cname = "ts_node_string")]
		public string to_string ();

		[CCode (cname = "ts_node_named_child_count")]
		public uint32 named_child_count ();

		[CCode (cname = "ts_node_child_count")]
		public uint32 child_count ();

		[CCode (cname = "ts_node_start_byte")]
		public uint32 start_byte ();

		[CCode (cname = "ts_node_end_byte")]
		public uint32 end_byte ();

		[CCode (cname = "ts_node_start_point")]
		public TSPoint start_point ();

		[CCode (cname = "ts_node_end_point")]
		public TSPoint end_point ();
	}

	[SimpleType]
	[CCode (has_type_id = false, cname = "TSPoint", free_function = "")]
	public struct TSPoint {
		public uint32 row;
		public uint32 column;
	}
}
