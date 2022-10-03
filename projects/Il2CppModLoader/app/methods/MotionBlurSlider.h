#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MotionBlurSlider {
    IL2CPP_REGISTER_METHOD(0x00867500, void, Awake, (app::MotionBlurSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00867580, float, get_Value, (app::MotionBlurSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00867630, void, set_Value, (app::MotionBlurSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008677A0, app::String*, GetValueToDisplay, (app::MotionBlurSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, (app::MotionBlurSlider * this_ptr))
} // namespace app::classes::MotionBlurSlider
