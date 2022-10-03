#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvocationExpression2__Class** type_info;
        inline app::InvocationExpression2__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression2__Class>(type_info, "System.Linq.Expressions", "InvocationExpression2");
        }
        inline app::InvocationExpression2* create() {
            return il2cpp::create_object<app::InvocationExpression2>(get_class());
        }
    } // namespace InvocationExpression2
} // namespace app::classes::types
