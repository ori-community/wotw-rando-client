#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberWaterSplash {
    IL2CPP_REGISTER_METHOD(0x012A9DB0, void, OnSplash, (app::UberWaterSplash * this_ptr, app::SeinSplashInfo splash))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberWaterSplash * this_ptr))
}
