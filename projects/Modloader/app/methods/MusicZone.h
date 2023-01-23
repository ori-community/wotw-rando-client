#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MusicZone.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>

namespace app::classes::MusicZone {
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Activated, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Activated, (app::MusicZone * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0087ED10, void, Awake, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F030, void, SetSoundProvider, (app::MusicZone * this_ptr, app::SoundProvider* sound_provider))
    IL2CPP_REGISTER_METHOD(0x0087F060, void, OnDestroy, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F070, void, OnEnable, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F130, void, OnDisable, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F200, void, ActivateMusicZone, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F3D0, void, DeactiveMusicZone, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F490, void, ctor, (app::MusicZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F4B0, void, cctor, ())
} // namespace app::classes::MusicZone
