#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <windows.h>

#include "TestClassCallers.h"


extern "C" EXAMPLEUNMANAGEDDLL_API Layer * CreateTestClass()
{
	return new Layer();
}

extern "C" EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Layer * pObject)
{
	if (pObject != NULL)
	{
		delete pObject;
		pObject = NULL;
	}
}

extern "C" EXAMPLEUNMANAGEDDLL_API float CallAdd(Layer * pObject, float a, float b)
{
	if (pObject != NULL)
	{
		pObject->add(a, b);
		return a + b;
	}
}