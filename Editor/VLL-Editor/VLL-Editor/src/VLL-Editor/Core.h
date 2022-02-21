#pragma once


#ifdef VL_PLATFORM_WINDOWS
	#ifdef VL_BUILD_DLL
		#define VLLEditor_API _declspec(dllexport)
	#else
		#define VLLEditor_API _declspec(dllimport)
	#endif
#else
	#error VLLEditor only supports Windows!
#endif