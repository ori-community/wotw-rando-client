#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryExpression__Class** type_info;
        inline app::BinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::BinaryExpression__Class>(type_info, "System.Linq.Expressions", "BinaryExpression");
        }
        inline app::BinaryExpression* create() {
            return il2cpp::create_object<app::BinaryExpression>(get_class());
        }
    } // namespace BinaryExpression
} // namespace app::classes::types
