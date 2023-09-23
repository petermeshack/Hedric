#pragma once

#ifdef HD_PLATFORM_WINDOWS

extern Hedric::Application* Hedric::CreateApplication();

int main(int argc, char** argv) {

	auto app = Hedric::CreateApplication();
	app->Run();
	delete app;

}
#endif // HD_PLATFORM_WINDOWS
