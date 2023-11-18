#pragma once
#include <Modloader/app/structs/AudioMixerGroup.h>
#include <Modloader/app/structs/AudioMixerGroup__Array.h>
#include <Modloader/app/structs/AudioMixerGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioMixerGroup {
        inline app::AudioMixerGroup__Class** type_info() {
            static app::AudioMixerGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioMixerGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioMixerGroup__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerGroup__Class>(type_info(), "UnityEngine.Audio", "AudioMixerGroup");
        }
        inline app::AudioMixerGroup* create() {
            return il2cpp::create_object<app::AudioMixerGroup>(get_class());
        }
        inline app::AudioMixerGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioMixerGroup__Array>(get_class(), size);
        }
        inline app::AudioMixerGroup__Array* create_array(const std::vector<app::AudioMixerGroup*>& items) {
            return il2cpp::array_new<app::AudioMixerGroup__Array>(get_class(), items);
        }
    } // namespace AudioMixerGroup
} // namespace app::classes::types
