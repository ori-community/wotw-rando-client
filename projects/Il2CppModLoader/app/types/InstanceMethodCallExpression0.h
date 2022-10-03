#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstanceMethodCallExpression0__Class** type_info;
        inline app::InstanceMethodCallExpression0__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression0__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression0");
        }
        inline app::InstanceMethodCallExpression0* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression0>(get_class());
        }
    } // namespace InstanceMethodCallExpression0
} // namespace app::classes::types
