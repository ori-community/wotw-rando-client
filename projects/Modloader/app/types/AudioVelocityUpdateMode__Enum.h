#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AudioVelocityUpdateMode__Enum {
        namespace {
            inline app::AudioVelocityUpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AudioVelocityUpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::AudioVelocityUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AudioVelocityUpdateMode__Enum__Class>(type_info, "UnityEngine", "AudioVelocityUpdateMode");
        }
        inline app::AudioVelocityUpdateMode__Enum* create() {
            return il2cpp::create_object<app::AudioVelocityUpdateMode__Enum>(get_class());
        }
    } // namespace AudioVelocityUpdateMode__Enum
} // namespace app::classes::types
