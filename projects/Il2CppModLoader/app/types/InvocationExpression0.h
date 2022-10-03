#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvocationExpression0__Class** type_info;
        inline app::InvocationExpression0__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression0__Class>(type_info, "System.Linq.Expressions", "InvocationExpression0");
        }
        inline app::InvocationExpression0* create() {
            return il2cpp::create_object<app::InvocationExpression0>(get_class());
        }
    } // namespace InvocationExpression0
} // namespace app::classes::types
