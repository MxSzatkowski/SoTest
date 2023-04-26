#ifndef __TestClassCallers_h__
#define __TestClassCallers_h__

#include "Layer.h"		// needed for EXAMPLEUNMANAGEDDLL_API

#ifdef __cplusplus
extern "C" {
#endif

	extern EXAMPLEUNMANAGEDDLL_API Layer* CreateTestClass();
	extern EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Layer* pObject);

	extern EXAMPLEUNMANAGEDDLL_API float CallAdd(Layer* pObject, float a, float b);

#ifdef __cplusplus
}
#endif

#endif // __TestClassCallers_h__
