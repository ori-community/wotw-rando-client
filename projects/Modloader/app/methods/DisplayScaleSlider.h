#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DisplayScaleSlider {
    IL2CPP_REGISTER_METHOD(0x00B99220, void, Awake, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99350, float, get_Value, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B994E0, void, set_Value, (app::DisplayScaleSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B99730, void, UpdateValue, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99740, app::String*, GetValueToDisplay, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99850, void, ApplyScaleSettings, (app::DisplayScaleSlider * this_ptr, float scale_value))
    IL2CPP_REGISTER_METHOD(0x00B99980, void, FixedUpdate, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99B50, void, OnDisable, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99C30, void, ctor, (app::DisplayScaleSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::DisplayScaleSlider
