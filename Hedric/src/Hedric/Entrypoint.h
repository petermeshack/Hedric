#pragma once

#ifdef HD_PLATFORM_WINDOWS

extern Hedric::Application* Hedric::CreateApplication();

int main(int argc, char** argv) {
	Hedric::Log::Init();
	HD_CORE_WARN("Initialized log");
	int a = 4;
	HD_CORE_INFO("Hello Var{0}",a);

	auto app = Hedric::CreateApplication();
	app->Run();
	delete app;

}
#endif // HD_PLATFORM_WINDOWS
