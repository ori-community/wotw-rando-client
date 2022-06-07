#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SaturationSlider {
    IL2CPP_REGISTER_METHOD(0x00C2ACC0, float, get_Value, (app::SaturationSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2AD70, void, set_Value, (app::SaturationSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C2AE60, app::String *, GetValueToDisplay, (app::SaturationSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::SaturationSlider * this_ptr))
}
