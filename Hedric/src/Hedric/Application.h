#pragma once

#include "Core.h"

namespace Hedric{
	class HEDRIC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//TO BE DEFINED IN CLIENT
	Application* CreateApplication();


}