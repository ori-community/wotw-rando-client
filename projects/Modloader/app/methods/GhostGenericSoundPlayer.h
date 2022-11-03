#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostGenericSoundPlayer {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Id, (app::GhostGenericSoundPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::GhostGenericSoundPlayer * this_ptr, int32_t id, app::GenericPuppet* puppet))
    IL2CPP_REGISTER_METHOD(0x00E20180, void, Play, (app::GhostGenericSoundPlayer * this_ptr, app::SoundProvider* sound))
    IL2CPP_REGISTER_METHOD(0x00E20340, void, PlayInternal, (app::GhostGenericSoundPlayer * this_ptr, app::SoundProvider* sound_provider, app::Vector3 position, app::Transform* attach_to))
    IL2CPP_REGISTER_METHOD(0x00E204C0, void, FadeOut, (app::GhostGenericSoundPlayer * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00E205A0, void, FadeOutInternal, (app::GhostGenericSoundPlayer * this_ptr, float time))
} // namespace app::classes::GhostGenericSoundPlayer
