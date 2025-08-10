#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundComposition.h>
#include <Modloader/app/structs/SoundCompositionPlayer.h>

namespace app::classes::SoundCompositionPlayer {
    IL2CPP_REGISTER_METHOD(0x00EE6150, void, Awake, app::SoundCompositionPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE62F0, void, OnGameReset, app::SoundCompositionPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE65A0, void, OnDestroy, app::SoundCompositionPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE6960, void, SetSoundComposition, app::SoundCompositionPlayer* this_ptr, app::SoundComposition* sound_composition)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Play, app::SoundCompositionPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE6C10, void, FixedUpdate, app::SoundCompositionPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EE75A0, void, ctor, app::SoundCompositionPlayer* this_ptr)
} // namespace app::classes::SoundCompositionPlayer
