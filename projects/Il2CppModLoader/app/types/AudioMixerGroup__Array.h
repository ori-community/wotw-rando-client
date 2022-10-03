#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioMixerGroup__Array {
        namespace {
            app::AudioMixerGroup__Array__Class* type_info_ref = nullptr;
        }
        app::AudioMixerGroup__Array__Class** type_info = &type_info_ref;
        inline app::AudioMixerGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerGroup__Array__Class>(type_info, "UnityEngine.Audio", "AudioMixerGroup[]");
        }
        inline app::AudioMixerGroup__Array* create() {
            return il2cpp::create_object<app::AudioMixerGroup__Array>(get_class());
        }
    } // namespace AudioMixerGroup__Array
} // namespace app::classes::types
