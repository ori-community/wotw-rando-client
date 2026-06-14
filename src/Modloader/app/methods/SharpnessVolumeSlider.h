#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SharpnessVolumeSlider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SharpnessVolumeSlider {
    IL2CPP_REGISTER_METHOD(0x005B1A30, void, Awake, app::SharpnessVolumeSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B1BA0, float, get_Value, app::SharpnessVolumeSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B1C50, void, set_Value, app::SharpnessVolumeSlider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x005B1D40, app::String*, GetValueToDisplay, app::SharpnessVolumeSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B1E70, void, ApplySharpness, )
    IL2CPP_REGISTER_METHOD(0x00444040, void, ctor, app::SharpnessVolumeSlider* this_ptr)
} // namespace app::classes::SharpnessVolumeSlider
