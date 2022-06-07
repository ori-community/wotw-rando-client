#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ContrastVolumeSlider {
    IL2CPP_REGISTER_METHOD(0x011E7F70, float, get_Value, (app::ContrastVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E8020, void, set_Value, (app::ContrastVolumeSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011E8100, app::String *, GetValueToDisplay, (app::ContrastVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::ContrastVolumeSlider * this_ptr))
}
