#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssignBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssignBinaryExpression__Class** type_info;
        inline app::AssignBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::AssignBinaryExpression__Class>(type_info, "System.Linq.Expressions", "AssignBinaryExpression");
        }
        inline app::AssignBinaryExpression* create() {
            return il2cpp::create_object<app::AssignBinaryExpression>(get_class());
        }
    } // namespace AssignBinaryExpression
} // namespace app::classes::types
