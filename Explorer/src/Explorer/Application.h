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

	// �ڿͻ��˴���
	Application* CreateApplication();

}

