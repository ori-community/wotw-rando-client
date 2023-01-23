#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AudioMixerGroup__Class.h>
#include <Modloader/app/structs/AudioMixerGroup.h>
#include <Modloader/app/structs/AudioMixerGroup__Array.h>

namespace app::classes::types {
    namespace AudioMixerGroup {
        namespace {
            inline app::AudioMixerGroup__Class* type_info_ref = nullptr;
        }
        inline app::AudioMixerGroup__Class** type_info = &type_info_ref;
        inline app::AudioMixerGroup__Class* get_class() {
            return il2cpp::get_class<app::AudioMixerGroup__Class>(type_info, "UnityEngine.Audio", "AudioMixerGroup");
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
