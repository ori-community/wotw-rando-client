#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ValueInComponentProvider {
    IL2CPP_REGISTER_METHOD(0x013B8FF0, void, Awake, (app::ValueInComponentProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B9050, float, GetFloatValue, (app::ValueInComponentProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ValueInComponentProvider * this_ptr))
}
