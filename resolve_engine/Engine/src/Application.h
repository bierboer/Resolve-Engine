#pragma once

namespace resolve
{
	class Application
	{
	public:
		Application() = default;
		virtual ~Application() = default;

		virtual void Start();	//used for setting up your game(called at the first frame only)
		virtual void Update();	//used for writing game logic and rendering(called every frame)
		bool IsRunning = false;	//used for checking if the application is still running or not
	};

	//the InitApp() function will be defined by the user:
	//this function should return an instance of the class that inherited from Application
	//we need this instance to create the app(and call Start & Update) in WinMain.cpp
	resolve::Application* InitApp();
}