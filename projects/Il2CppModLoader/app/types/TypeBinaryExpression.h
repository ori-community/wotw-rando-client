#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeBinaryExpression__Class** type_info;
        inline app::TypeBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::TypeBinaryExpression__Class>(type_info, "System.Linq.Expressions", "TypeBinaryExpression");
        }
        inline app::TypeBinaryExpression* create() {
            return il2cpp::create_object<app::TypeBinaryExpression>(get_class());
        }
    } // namespace TypeBinaryExpression
} // namespace app::classes::types
