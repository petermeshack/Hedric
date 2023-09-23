#pragma once

#ifdef HD_PLATFORM_WINDOWS
	#ifdef HD_BUILD_DLL
		#define HEDRIC_API __declspec(dllexport)
	#else 
		#define HEDRIC_API __declspec(dllimport)
	#endif//HEDRIC_API
#else
	#error Hedric only supports Windows!
#endif // HD_PLATFORM_WINDOWS

