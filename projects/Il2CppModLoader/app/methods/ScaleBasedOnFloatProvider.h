#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScaleBasedOnFloatProvider {
    IL2CPP_REGISTER_METHOD(0x00933AA0, void, Awake, (app::ScaleBasedOnFloatProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933B10, void, FixedUpdate, (app::ScaleBasedOnFloatProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ScaleBasedOnFloatProvider * this_ptr))
}
