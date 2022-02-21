#pragma once


#ifdef VL_PLATFORM_WINDOWS
	#ifdef VL_BUILD_DLL
		#define VLL_API _declspec(dllexport)
	#else
		#define VLL_API _declspec(dllimport)
	#endif
#else
	#error VLL Editor only supports Windows!
#endif