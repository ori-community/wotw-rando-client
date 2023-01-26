#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrightnessVolumeSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BrightnessVolumeSlider {
    IL2CPP_REGISTER_METHOD(0x00D51180, void, Awake, (app::BrightnessVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D511B0, float, get_Value, (app::BrightnessVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D51260, void, set_Value, (app::BrightnessVolumeSlider * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D51340, app::String*, GetValueToDisplay, (app::BrightnessVolumeSlider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, (app::BrightnessVolumeSlider * this_ptr))
} // namespace app::classes::BrightnessVolumeSlider
