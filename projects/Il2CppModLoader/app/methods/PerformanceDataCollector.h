#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PerformanceDataCollector {
    IL2CPP_REGISTER_METHOD(0x0044CE80, void, Start, (app::PerformanceDataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044D0F0, void, OnApplicationQuit, (app::PerformanceDataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044D100, void, WriteData, (app::PerformanceDataCollector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PerformanceDataCollector * this_ptr))
}
