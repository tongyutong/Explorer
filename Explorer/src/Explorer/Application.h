#pragma once
#include "Core.h"
namespace Explorer
{
	class EXPLORER_API Application
	{
		public:
			Application();
			virtual	~Application();
			void Run();
	};

	// 在客户端创建
	Application* CreateApplication();

}

