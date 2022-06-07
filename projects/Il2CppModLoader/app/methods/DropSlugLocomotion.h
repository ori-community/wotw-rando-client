#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DropSlugLocomotion {
    IL2CPP_REGISTER_METHOD(0x00BE57B0, bool, get_IsSpinning, (app::DropSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE57D0, float, get_ContinuousRotation, (app::DropSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE57E0, void, RegisterContinuousRotation, (app::DropSlugLocomotion * this_ptr, float rotation))
    IL2CPP_REGISTER_METHOD(0x00BE5A20, void, OnFixedUpdate, (app::DropSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE5EE0, void, ResetRotation, (app::DropSlugLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BE5FE0, void, ctor, (app::DropSlugLocomotion * this_ptr))
}
