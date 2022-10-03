#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioMixerGroup {
        namespace {
            app::AudioMixerGroup__Class* type_info_ref = nullptr;
        }
        app::AudioMixerGroup__Class** type_info = &type_info_ref;
        inline app::AudioMixerGroup__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerGroup__Class>(type_info, "UnityEngine.Audio", "AudioMixerGroup");
        }
        inline app::AudioMixerGroup* create() {
            return il2cpp::create_object<app::AudioMixerGroup>(get_class());
        }
        inline app::AudioMixerGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::AudioMixerGroup__Array>(get_class(), size);
        }
    } // namespace AudioMixerGroup
} // namespace app::classes::types
