#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::HDRShadowDetailSlider {
    IL2CPP_REGISTER_METHOD(0x0109BB50, void, Awake, (app::HDRShadowDetailSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109BC30, float, get_Value, (app::HDRShadowDetailSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109BCE0, void, set_Value, (app::HDRShadowDetailSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0109BDD0, app::String*, GetValueToDisplay, (app::HDRShadowDetailSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::HDRShadowDetailSlider * this_ptr))
} // namespace app::classes::HDRShadowDetailSlider
