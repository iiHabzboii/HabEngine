#pragma once

#ifdef HAB_PLATFORM_WINDOWS
	#ifdef HAB_BUILD_DLL
		#define HAB_ENGINE_API __declspec(dllexport)
	#else
		#define HAB_ENGINE_API _declspec(dllimport)
	#endif
#else
	#error Hab Engine only support Windows!
#endif