#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/AudioMixerPlayable__Boxed.h>
#include <Modloader/app/structs/AudioMixerPlayable.h>

namespace app::classes::UnityEngine::Audio::AudioMixerPlayable {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AudioMixerPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002496D0, bool, Equals, (app::AudioMixerPlayable__Boxed * this_ptr, app::AudioMixerPlayable other))
} // namespace app::classes::UnityEngine::Audio::AudioMixerPlayable
