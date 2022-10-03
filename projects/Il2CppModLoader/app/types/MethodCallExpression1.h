#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression1__Class** type_info;
        inline app::MethodCallExpression1__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression1__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression1");
        }
        inline app::MethodCallExpression1* create() {
            return il2cpp::create_object<app::MethodCallExpression1>(get_class());
        }
    } // namespace MethodCallExpression1
} // namespace app::classes::types
