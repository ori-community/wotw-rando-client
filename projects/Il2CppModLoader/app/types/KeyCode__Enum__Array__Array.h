#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyCode__Enum__Array__Array {
        namespace {
            inline app::KeyCode__Enum__Array__Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyCode__Enum__Array__Array__Class** type_info = &type_info_ref;
        inline app::KeyCode__Enum__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyCode__Enum__Array__Array__Class>(type_info, "UnityEngine", "KeyCode[][]");
        }
        inline app::KeyCode__Enum__Array__Array* create() {
            return il2cpp::create_object<app::KeyCode__Enum__Array__Array>(get_class());
        }
    } // namespace KeyCode__Enum__Array__Array
} // namespace app::classes::types
