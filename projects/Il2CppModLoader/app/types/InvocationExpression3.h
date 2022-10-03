#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvocationExpression3__Class** type_info;
        inline app::InvocationExpression3__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression3__Class>(type_info, "System.Linq.Expressions", "InvocationExpression3");
        }
        inline app::InvocationExpression3* create() {
            return il2cpp::create_object<app::InvocationExpression3>(get_class());
        }
    } // namespace InvocationExpression3
} // namespace app::classes::types
