#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeadZoneLeftStickSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DeadZoneLeftStickSlider {
    IL2CPP_REGISTER_METHOD(0x00DDC490, float, get_Value, app::DeadZoneLeftStickSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDC540, void, set_Value, app::DeadZoneLeftStickSlider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00DDC660, app::String*, GetValueToDisplay, app::DeadZoneLeftStickSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, app::DeadZoneLeftStickSlider* this_ptr)
} // namespace app::classes::DeadZoneLeftStickSlider
