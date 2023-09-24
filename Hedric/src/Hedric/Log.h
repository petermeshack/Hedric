#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hedric {
	class  HEDRIC_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//core log macros
#define HD_CORE_TRACE(...)	::Hedric::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HD_CORE_INFO(...)	::Hedric::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HD_CORE_WARN(...)	::Hedric::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HD_CORE_ERROR(...)	::Hedric::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HD_CORE_FATAL(...)	::Hedric::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define HD_TRACE(...)		::Hedric::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HD_INFO(...)		::Hedric::Log::GetClientLogger()->info(__VA_ARGS__)
#define HD_WARN(...)		::Hedric::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HD_ERROR(...)		::Hedric::Log::GetClientLogger()->error(__VA_ARGS__)
#define HD_FATAL(...)		::Hedric::Log::GetClientLogger()->fatal(__VA_ARGS__)

