#include <Explorer.h>

class SandBox :public Explorer::Application
{
public:
	SandBox()
	{

	}
	~SandBox() {

	}

};

Explorer::Application* Explorer::CreateApplication()
{
	return new SandBox();
}