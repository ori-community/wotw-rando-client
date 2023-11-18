#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TargetFPSSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::TargetFPSSlider {
    IL2CPP_REGISTER_METHOD(0x00CE21F0, void, Awake, (app::TargetFPSSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE2240, float, get_Value, (app::TargetFPSSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE22F0, void, set_Value, (app::TargetFPSSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00CE23B0, app::String*, GetValueToDisplay, (app::TargetFPSSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, (app::TargetFPSSlider * this_ptr))
} // namespace app::classes::TargetFPSSlider
