#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinMaxSpeedBasedOnDistance.h>

namespace app::classes::SeinMaxSpeedBasedOnDistance {
    IL2CPP_REGISTER_METHOD(0x008A34E0, void, OnHorizontalInputCalculate, app::SeinMaxSpeedBasedOnDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A3880, void, OnEnable, app::SeinMaxSpeedBasedOnDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A3AA0, void, OnDisable, app::SeinMaxSpeedBasedOnDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A3D50, void, OnDrawGizmosSelected, app::SeinMaxSpeedBasedOnDistance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A3F30, void, ctor, app::SeinMaxSpeedBasedOnDistance* this_ptr)
} // namespace app::classes::SeinMaxSpeedBasedOnDistance
