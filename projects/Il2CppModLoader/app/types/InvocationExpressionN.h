#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvocationExpressionN {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvocationExpressionN__Class** type_info;
        inline app::InvocationExpressionN__Class* get_class() {
            return il2cpp::get_class<app::InvocationExpressionN__Class>(type_info, "System.Linq.Expressions", "InvocationExpressionN");
        }
        inline app::InvocationExpressionN* create() {
            return il2cpp::create_object<app::InvocationExpressionN>(get_class());
        }
    } // namespace InvocationExpressionN
} // namespace app::classes::types
