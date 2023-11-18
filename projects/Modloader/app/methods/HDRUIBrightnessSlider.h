#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HDRUIBrightnessSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::HDRUIBrightnessSlider {
    IL2CPP_REGISTER_METHOD(0x0109BEC0, void, Awake, (app::HDRUIBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109BFB0, float, get_Value, (app::HDRUIBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109C060, void, set_Value, (app::HDRUIBrightnessSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0109C150, app::String*, GetValueToDisplay, (app::HDRUIBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109C240, void, OnBackgroundEnabled, (app::HDRUIBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109C2F0, void, OnBackgroundDisabled, (app::HDRUIBrightnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::HDRUIBrightnessSlider * this_ptr))
} // namespace app::classes::HDRUIBrightnessSlider
