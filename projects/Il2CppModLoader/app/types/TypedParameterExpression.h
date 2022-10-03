#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypedParameterExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypedParameterExpression__Class** type_info;
        inline app::TypedParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::TypedParameterExpression__Class>(type_info, "System.Linq.Expressions", "TypedParameterExpression");
        }
        inline app::TypedParameterExpression* create() {
            return il2cpp::create_object<app::TypedParameterExpression>(get_class());
        }
    } // namespace TypedParameterExpression
} // namespace app::classes::types
