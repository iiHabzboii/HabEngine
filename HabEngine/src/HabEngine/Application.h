#pragma once

#include "Core.h"

namespace HabEngine
{
	class HAB_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}