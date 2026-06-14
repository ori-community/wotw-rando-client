#pragma once
#include <Modloader/app/structs/AudioRolloffMode__Enum.h>
#include <Modloader/app/structs/AudioRolloffMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioRolloffMode__Enum {
        inline app::AudioRolloffMode__Enum__Class** type_info() {
            static app::AudioRolloffMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioRolloffMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioRolloffMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioRolloffMode__Enum__Class>(type_info(), "UnityEngine", "AudioRolloffMode");
        }
        inline app::AudioRolloffMode__Enum* create() {
            return il2cpp::create_object<app::AudioRolloffMode__Enum>(get_class());
        }
    } // namespace AudioRolloffMode__Enum
} // namespace app::classes::types
