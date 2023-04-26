package;


import lime.system.CFFI;
import lime.system.JNI;


class DiffMatchPatch {
	
	
//	public static function sampleMethod (inputValue:Int):Int {
//		return diffmatchpatch_sample_method(inputValue);
//	}

	public static function diff (s1:String, s2:String):Dynamic {
		return _diffmatchpatch_diff(s1, s2);	
	}
	
	
//	private static var diffmatchpatch_sample_method = CFFI.load ("diffmatchpatch", "diffmatchpatch_sample_method", 1);	
	private static var _diffmatchpatch_diff = CFFI.load ("diffmatchpatch", "diffmatchpatch_diff", 2);	
	
}