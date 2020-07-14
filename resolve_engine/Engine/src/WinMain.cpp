#include "Application.h";

extern resolve::Application* resolve::InitApp();

int main()
{
	auto app = resolve::InitApp();
	app->IsRunning = true;
	app->Start();
	
	while (app->IsRunning)
	{
		app->Update();
	}

	delete app;
	return 0;
}