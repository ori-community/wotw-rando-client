#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/AudioPlayableOutput__Boxed.h>

namespace app::classes::UnityEngine::Audio::AudioPlayableOutput {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableOutputHandle, GetHandle, (app::AudioPlayableOutput__Boxed * this_ptr))
}
