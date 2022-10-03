#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCallExpression4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCallExpression4__Class** type_info;
        inline app::MethodCallExpression4__Class* get_class() {
            return il2cpp::get_class<app::MethodCallExpression4__Class>(type_info, "System.Linq.Expressions", "MethodCallExpression4");
        }
        inline app::MethodCallExpression4* create() {
            return il2cpp::create_object<app::MethodCallExpression4>(get_class());
        }
    } // namespace MethodCallExpression4
} // namespace app::classes::types
