#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression0__Class** type_info;
        inline app::MethodCallExpression0__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression0__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression0");
        }
        inline app::MethodCallExpression0* create() {
            return il2cpp::create_object<app::MethodCallExpression0>(get_class());
        }
    } // namespace MethodCallExpression0
} // namespace app::classes::types
