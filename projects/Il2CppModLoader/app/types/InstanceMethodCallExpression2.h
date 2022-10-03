#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstanceMethodCallExpression2__Class** type_info;
        inline app::InstanceMethodCallExpression2__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression2__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression2");
        }
        inline app::InstanceMethodCallExpression2* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression2>(get_class());
        }
    } // namespace InstanceMethodCallExpression2
} // namespace app::classes::types
