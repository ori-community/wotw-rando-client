#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioVelocityUpdateMode__Enum {
        namespace {
            app::AudioVelocityUpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AudioVelocityUpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::AudioVelocityUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioVelocityUpdateMode__Enum__Class>(type_info, "UnityEngine", "AudioVelocityUpdateMode");
        }
        inline app::AudioVelocityUpdateMode__Enum* create() {
            return il2cpp::create_object<app::AudioVelocityUpdateMode__Enum>(get_class());
        }
    } // namespace AudioVelocityUpdateMode__Enum
} // namespace app::classes::types
