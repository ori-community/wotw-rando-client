#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypedConstantExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypedConstantExpression__Class** type_info;
        inline app::TypedConstantExpression__Class* get_class() {
            return il2cpp::get_class<app::TypedConstantExpression__Class>(type_info, "System.Linq.Expressions", "TypedConstantExpression");
        }
        inline app::TypedConstantExpression* create() {
            return il2cpp::create_object<app::TypedConstantExpression>(get_class());
        }
    } // namespace TypedConstantExpression
} // namespace app::classes::types
