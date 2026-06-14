#pragma once
#include <Modloader/app/structs/AudioSampleProvider.h>
#include <Modloader/app/structs/AudioSampleProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSampleProvider {
        inline app::AudioSampleProvider__Class** type_info() {
            static app::AudioSampleProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioSampleProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioSampleProvider__Class* get_class() {
            return il2cpp::get_class<app::AudioSampleProvider__Class>(type_info(), "UnityEngine.Experimental.Audio", "AudioSampleProvider");
        }
        inline app::AudioSampleProvider* create() {
            return il2cpp::create_object<app::AudioSampleProvider>(get_class());
        }
    } // namespace AudioSampleProvider
} // namespace app::classes::types
