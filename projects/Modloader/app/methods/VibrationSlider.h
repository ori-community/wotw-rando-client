#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::VibrationSlider {
    IL2CPP_REGISTER_METHOD(0x008BB5A0, float, get_Value, (app::VibrationSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BB650, void, set_Value, (app::VibrationSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, (app::VibrationSlider * this_ptr))
} // namespace app::classes::VibrationSlider
