#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceMode__Enum {
        namespace {
            app::ForceMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ForceMode__Enum__Class** type_info = &type_info_ref;
        inline app::ForceMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ForceMode__Enum__Class>(type_info, "UnityEngine", "ForceMode");
        }
        inline app::ForceMode__Enum* create() {
            return il2cpp::create_object<app::ForceMode__Enum>(get_class());
        }
    } // namespace ForceMode__Enum
} // namespace app::classes::types
