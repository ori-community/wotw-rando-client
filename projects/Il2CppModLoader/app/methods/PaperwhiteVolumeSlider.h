#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PaperwhiteVolumeSlider {
    IL2CPP_REGISTER_METHOD(0x00443D70, void, Awake, (app::PaperwhiteVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443DB0, float, get_Value, (app::PaperwhiteVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443E60, void, set_Value, (app::PaperwhiteVolumeSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00443F50, app::String*, GetValueToDisplay, (app::PaperwhiteVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::PaperwhiteVolumeSlider * this_ptr))
} // namespace app::classes::PaperwhiteVolumeSlider
