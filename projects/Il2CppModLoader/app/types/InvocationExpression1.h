#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvocationExpression1__Class** type_info;
        inline app::InvocationExpression1__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression1__Class>(type_info, "System.Linq.Expressions", "InvocationExpression1");
        }
        inline app::InvocationExpression1* create() {
            return il2cpp::create_object<app::InvocationExpression1>(get_class());
        }
    } // namespace InvocationExpression1
} // namespace app::classes::types
