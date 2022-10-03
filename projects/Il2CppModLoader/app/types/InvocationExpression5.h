#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvocationExpression5 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvocationExpression5__Class** type_info;
        inline app::InvocationExpression5__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpression5__Class>(type_info, "System.Linq.Expressions", "InvocationExpression5");
        }
        inline app::InvocationExpression5* create() {
            return il2cpp::create_object<app::InvocationExpression5>(get_class());
        }
    } // namespace InvocationExpression5
} // namespace app::classes::types
