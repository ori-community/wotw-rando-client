#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Audio::AudioPlayableOutput {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableOutputHandle, GetHandle, (app::AudioPlayableOutput__Boxed * this_ptr))
}
