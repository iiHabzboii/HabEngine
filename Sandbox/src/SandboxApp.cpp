#include <HabEngine.h>

class Sandbox : public HabEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

HabEngine::Application* HabEngine::CreateApplication()
{
	return new Sandbox();
}