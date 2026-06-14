#pragma once
#include <Modloader/app/structs/AudioClipLoadType__Enum.h>
#include <Modloader/app/structs/AudioClipLoadType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioClipLoadType__Enum {
        inline app::AudioClipLoadType__Enum__Class** type_info() {
            static app::AudioClipLoadType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioClipLoadType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioClipLoadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioClipLoadType__Enum__Class>(type_info(), "UnityEngine", "AudioClipLoadType");
        }
        inline app::AudioClipLoadType__Enum* create() {
            return il2cpp::create_object<app::AudioClipLoadType__Enum>(get_class());
        }
    } // namespace AudioClipLoadType__Enum
} // namespace app::classes::types
