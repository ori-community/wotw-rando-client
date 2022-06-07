#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HDRRichnessSlider {
    IL2CPP_REGISTER_METHOD(0x0109B7E0, void, Awake, (app::HDRRichnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109B8C0, float, get_Value, (app::HDRRichnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109B970, void, set_Value, (app::HDRRichnessSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0109BA60, app::String *, GetValueToDisplay, (app::HDRRichnessSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::HDRRichnessSlider * this_ptr))
}
