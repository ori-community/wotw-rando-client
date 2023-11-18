#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/AudioClipPlayable.h>
#include <Modloader/app/structs/AudioClipPlayable__Boxed.h>

namespace app::classes::UnityEngine::Audio::AudioClipPlayable {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::AudioClipPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00249570, bool, Equals, (app::AudioClipPlayable__Boxed * this_ptr, app::AudioClipPlayable other))
} // namespace app::classes::UnityEngine::Audio::AudioClipPlayable
