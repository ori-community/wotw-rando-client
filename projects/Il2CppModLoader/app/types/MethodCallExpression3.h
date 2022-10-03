#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression3__Class** type_info;
        inline app::MethodCallExpression3__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression3__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression3");
        }
        inline app::MethodCallExpression3* create() {
            return il2cpp::create_object<app::MethodCallExpression3>(get_class());
        }
    } // namespace MethodCallExpression3
} // namespace app::classes::types
