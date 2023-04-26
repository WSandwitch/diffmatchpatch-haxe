#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif


//#include <hx/CFFI.h>
#include "Utils.h"

using namespace std;
using namespace diffmatchpatch;



static value diffmatchpatch_sample_method (value inputValue) {
	
	int returnValue = SampleMethod(val_int(inputValue));
	return alloc_int(returnValue);
	
}
DEFINE_PRIM (diffmatchpatch_sample_method, 1);

static value diffmatchpatch_diff (value s1, value s2) {
	
	return diff__(wstring(val_wstring(s1), val_strlen(s1)),wstring(val_wstring(s2),val_strlen(s2)));
	
}
DEFINE_PRIM (diffmatchpatch_diff, 2);



extern "C" void diffmatchpatch_main () {
	
	val_int(0); // Fix Neko init
	
}
DEFINE_ENTRY_POINT (diffmatchpatch_main);



extern "C" int diffmatchpatch_register_prims () { return 0; }