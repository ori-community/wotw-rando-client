#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrimitiveType__Enum {
        namespace {
            app::PrimitiveType__Enum__Class* type_info_ref = nullptr;
        }
        app::PrimitiveType__Enum__Class** type_info = &type_info_ref;
        inline app::PrimitiveType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveType__Enum__Class>(type_info, "UnityEngine", "PrimitiveType");
        }
        inline app::PrimitiveType__Enum* create() {
            return il2cpp::create_object<app::PrimitiveType__Enum>(get_class());
        }
    } // namespace PrimitiveType__Enum
} // namespace app::classes::types
