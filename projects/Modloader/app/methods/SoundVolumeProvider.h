#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundVolumeProvider.h>

namespace app::classes::SoundVolumeProvider {
    IL2CPP_REGISTER_METHOD(0x00EEE120, float, GetFloatValue, app::SoundVolumeProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SoundVolumeProvider* this_ptr)
} // namespace app::classes::SoundVolumeProvider
