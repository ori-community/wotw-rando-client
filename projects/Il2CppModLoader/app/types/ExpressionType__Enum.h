#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpressionType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpressionType__Enum__Class** type_info;
        inline app::ExpressionType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExpressionType__Enum__Class>(type_info, "System.Linq.Expressions", "ExpressionType");
        }
        inline app::ExpressionType__Enum* create() {
            return il2cpp::create_object<app::ExpressionType__Enum>(get_class());
        }
    } // namespace ExpressionType__Enum
} // namespace app::classes::types
