#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BrightnessProvider {
    IL2CPP_REGISTER_METHOD(0x00D510D0, float, GetFloatValue, (app::BrightnessProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BrightnessProvider * this_ptr))
}
