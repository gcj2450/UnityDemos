
#ifdef _GNUC_

#include <jni.h>
#include<math.h>
#define DLL_EXPORT JNIEXPORT

#else
	#ifdef SIMPLEDLL_EXPORT
	#define DLL_EXPORT __declspec(dllexport)
	#else
	#define DLL_EXPORT
	#endif
#endif


extern "C"
{
	DLL_EXPORT int TestAPI();
	DLL_EXPORT float CalcDistance(float fSrcEntityX, float fSrcEntityY, float fDstEntityX, float fDstEntityY);
}





