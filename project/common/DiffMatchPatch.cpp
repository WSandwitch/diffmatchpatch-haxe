#include "Utils.h"
#include <hx/CFFI.h>

using namespace std;

namespace diffmatchpatch {
	
	
	int SampleMethod(int inputValue) {
		return inputValue * 100; 
		
	}
	
	value diff__(wstring s1, wstring s2){
        diff_match_patch<wstring> dmp;
		diff_match_patch<wstring>::Diffs diffs = dmp.diff_main(s1, s2);
        value a = alloc_array(0);
		for (auto d: diffs){
            value v = alloc_array(0);
            val_array_push(v,alloc_int(d.operation));
            val_array_push(v,alloc_wstring_len(d.text.data(), d.text.size()));
            val_array_push(a,v);
		}
		return a;
	} 
	
}