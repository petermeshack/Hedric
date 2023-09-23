#include <Hedric.h>

class Sandbox : public Hedric::Application {
public:
	Sandbox() {

	}
	~Sandbox() {


	}

};
Hedric::Application* Hedric::CreateApplication() {
	return new Sandbox();
}