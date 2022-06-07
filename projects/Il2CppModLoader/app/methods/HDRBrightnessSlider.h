#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HDRBrightnessSlider {
    IL2CPP_REGISTER_METHOD(0x0109AEF0, void, Awake, (app::HDRBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109AFE0, float, get_Value, (app::HDRBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109B090, void, set_Value, (app::HDRBrightnessSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0109B180, app::String *, GetValueToDisplay, (app::HDRBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::HDRBrightnessSlider * this_ptr))
}
