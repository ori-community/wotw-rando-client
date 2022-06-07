#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::AsymGroundEntityLocomotion {
    IL2CPP_REGISTER_METHOD(0x00CB47C0, app::Vector2, get_LookDirection, (app::AsymGroundEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB4810, bool, get_IsFacingLeft, (app::AsymGroundEntityLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB4850, void, InstantFlip, (app::AsymGroundEntityLocomotion * this_ptr, float direction_sign))
    IL2CPP_REGISTER_METHOD(0x00CB48B0, void, ctor, (app::AsymGroundEntityLocomotion * this_ptr))
}
