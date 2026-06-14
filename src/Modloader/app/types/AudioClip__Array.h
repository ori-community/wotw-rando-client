#pragma once
#include <Modloader/app/structs/AudioClip__Array.h>
#include <Modloader/app/structs/AudioClip__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioClip__Array {
        inline app::AudioClip__Array__Class** type_info() {
            static app::AudioClip__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioClip__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioClip__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioClip__Array__Class>(type_info(), "UnityEngine", "AudioClip[]");
        }
        inline app::AudioClip__Array* create() {
            return il2cpp::create_object<app::AudioClip__Array>(get_class());
        }
    } // namespace AudioClip__Array
} // namespace app::classes::types
