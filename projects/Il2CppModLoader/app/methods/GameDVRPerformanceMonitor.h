#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GameDVRPerformanceMonitor {
    IL2CPP_REGISTER_METHOD(0x0069D7D0, bool, get_Enabled, ())
    IL2CPP_REGISTER_METHOD(0x0069D880, void, set_Enabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x0069DB10, void, Update, (app::GameDVRPerformanceMonitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GameDVRPerformanceMonitor * this_ptr))
}
