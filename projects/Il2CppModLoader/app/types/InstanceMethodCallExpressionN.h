#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpressionN {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstanceMethodCallExpressionN__Class** type_info;
        inline app::InstanceMethodCallExpressionN__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpressionN__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpressionN");
        }
        inline app::InstanceMethodCallExpressionN* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpressionN>(get_class());
        }
    } // namespace InstanceMethodCallExpressionN
} // namespace app::classes::types
