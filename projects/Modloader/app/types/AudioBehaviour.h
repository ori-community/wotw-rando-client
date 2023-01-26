#pragma once
#include <Modloader/app/structs/AudioBehaviour.h>
#include <Modloader/app/structs/AudioBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioBehaviour {
        inline app::AudioBehaviour__Class** type_info() {
            static app::AudioBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AudioBehaviour__Class>(type_info(), "UnityEngine", "AudioBehaviour");
        }
        inline app::AudioBehaviour* create() {
            return il2cpp::create_object<app::AudioBehaviour>(get_class());
        }
    } // namespace AudioBehaviour
} // namespace app::classes::types
