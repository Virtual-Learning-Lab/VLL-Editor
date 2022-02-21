#pragma once


#ifdef VLL_PLATFORM_WINDOWS
	#ifdef VLL_BUILD_DLL
		#define VLL_API _declspec(dllexport)
	#else
		#define VLL_API _declspec(dllimport)
	#endif
#else
	#error VLL Editor only supports Windows at the moment!
#endif