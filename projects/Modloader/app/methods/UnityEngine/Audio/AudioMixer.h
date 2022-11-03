#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Audio::AudioMixer {
    IL2CPP_REGISTER_METHOD(0x0313DA20, app::AudioMixerGroup__Array*, FindMatchingGroups, (app::AudioMixer * this_ptr, app::String* sub_path))
    IL2CPP_REGISTER_METHOD(0x0313DA80, bool, SetFloat, (app::AudioMixer * this_ptr, app::String* name, float value))
} // namespace app::classes::UnityEngine::Audio::AudioMixer
