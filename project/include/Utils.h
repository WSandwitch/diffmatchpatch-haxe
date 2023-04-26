#ifndef DIFFMATCHPATCH_H
#define DIFFMATCHPATCH_H


#include <hx/CFFI.h>
#include "diff_match_patch.h"

namespace diffmatchpatch {
	
	
	int SampleMethod(int inputValue);
	value diff__(std::wstring s1, std::wstring s2);
	
}


#endif