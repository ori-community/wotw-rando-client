#pragma once
#include <Modloader/app/structs/AudioVelocityUpdateMode__Enum.h>
#include <Modloader/app/structs/AudioVelocityUpdateMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioVelocityUpdateMode__Enum {
        inline app::AudioVelocityUpdateMode__Enum__Class** type_info() {
            static app::AudioVelocityUpdateMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AudioVelocityUpdateMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AudioVelocityUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioVelocityUpdateMode__Enum__Class>(type_info(), "UnityEngine", "AudioVelocityUpdateMode");
        }
        inline app::AudioVelocityUpdateMode__Enum* create() {
            return il2cpp::create_object<app::AudioVelocityUpdateMode__Enum>(get_class());
        }
    } // namespace AudioVelocityUpdateMode__Enum
} // namespace app::classes::types
