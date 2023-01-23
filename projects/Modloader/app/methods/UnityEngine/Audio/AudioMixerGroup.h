#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AudioMixerGroup.h>

namespace app::classes::UnityEngine::Audio::AudioMixerGroup {
    IL2CPP_REGISTER_METHOD(0x0313DAF0, void, ctor, (app::AudioMixerGroup * this_ptr))
}
