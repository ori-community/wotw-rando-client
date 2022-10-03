#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression__Class** type_info;
        inline app::MethodCallExpression__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression");
        }
        inline app::MethodCallExpression* create() {
            return il2cpp::create_object<app::MethodCallExpression>(get_class());
        }
    } // namespace MethodCallExpression
} // namespace app::classes::types
