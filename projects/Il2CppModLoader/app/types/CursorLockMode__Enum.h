#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CursorLockMode__Enum {
        namespace {
            app::CursorLockMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CursorLockMode__Enum__Class** type_info = &type_info_ref;
        inline app::CursorLockMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CursorLockMode__Enum__Class>(type_info, "UnityEngine", "CursorLockMode");
        }
        inline app::CursorLockMode__Enum* create() {
            return il2cpp::create_object<app::CursorLockMode__Enum>(get_class());
        }
    } // namespace CursorLockMode__Enum
} // namespace app::classes::types
