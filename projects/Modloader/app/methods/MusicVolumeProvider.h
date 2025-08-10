#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MusicVolumeProvider.h>

namespace app::classes::MusicVolumeProvider {
    IL2CPP_REGISTER_METHOD(0x0087EAC0, float, GetFloatValue, app::MusicVolumeProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MusicVolumeProvider* this_ptr)
} // namespace app::classes::MusicVolumeProvider
