#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VitalsHealthProvider {
    IL2CPP_REGISTER_METHOD(0x008C2B20, void, OnValidate, (app::VitalsHealthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C2BF0, void, Awake, (app::VitalsHealthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C2CB0, float, GetFloatValue, (app::VitalsHealthProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VitalsHealthProvider * this_ptr))
}
