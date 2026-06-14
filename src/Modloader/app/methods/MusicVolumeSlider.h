#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MusicVolumeSlider.h>

namespace app::classes::MusicVolumeSlider {
    IL2CPP_REGISTER_METHOD(0x0087EB70, float, get_Value, app::MusicVolumeSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0087EC20, void, set_Value, app::MusicVolumeSlider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, app::MusicVolumeSlider* this_ptr)
} // namespace app::classes::MusicVolumeSlider
