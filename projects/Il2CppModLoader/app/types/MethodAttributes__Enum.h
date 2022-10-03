#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodAttributes__Enum {
        namespace {
            app::MethodAttributes__Enum__Class* type_info_ref = nullptr;
        }
        app::MethodAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::MethodAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MethodAttributes__Enum__Class>(type_info, "System.Reflection", "MethodAttributes");
        }
        inline app::MethodAttributes__Enum* create() {
            return il2cpp::create_object<app::MethodAttributes__Enum>(get_class());
        }
    } // namespace MethodAttributes__Enum
} // namespace app::classes::types
