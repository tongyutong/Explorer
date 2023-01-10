#pragma once


#ifdef EP_PLATFORM_WINDOWS
	#ifdef  EP_BUILD_DLL
		#define EXPLORER_API 	_declspec(dllexport)
	#else
		#define EXPLORER_API 	_declspec(dllimport) 
	#endif //  EP_BUILD_DLL
#else
	#error Explorer Only support windows!
#endif // EP_PLATFORM_WINDOWS
