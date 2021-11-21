#pragma once

#ifdef HAB_PLATFORM_WINDOWS

extern HabEngine::Application* HabEngine::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "Hello From HabEngine" << std::endl;
	auto app = HabEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif