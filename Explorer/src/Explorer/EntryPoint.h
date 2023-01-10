#pragma once

#ifdef EP_PLATFORM_WINDOWS
extern Explorer::Application* Explorer::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Explorer::CreateApplication();
	app->Run();
	delete app;
}


#endif // EXPLORER_PLTFORM_WINDOWS
