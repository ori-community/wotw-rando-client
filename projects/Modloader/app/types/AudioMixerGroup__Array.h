#pragma once
#include <Modloader/app/structs/AudioMixerGroup__Array.h>
#include <Modloader/app/structs/AudioMixerGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioMixerGroup__Array {
        inline app::AudioMixerGroup__Array__Class** type_info() {
            static app::AudioMixerGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioMixerGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioMixerGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerGroup__Array__Class>(type_info(), "UnityEngine.Audio", "AudioMixerGroup[]");
        }
        inline app::AudioMixerGroup__Array* create() {
            return il2cpp::create_object<app::AudioMixerGroup__Array>(get_class());
        }
    } // namespace AudioMixerGroup__Array
} // namespace app::classes::types
