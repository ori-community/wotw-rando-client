#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression5 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression5__Class** type_info;
        inline app::MethodCallExpression5__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression5__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression5");
        }
        inline app::MethodCallExpression5* create() {
            return il2cpp::create_object<app::MethodCallExpression5>(get_class());
        }
    } // namespace MethodCallExpression5
} // namespace app::classes::types
