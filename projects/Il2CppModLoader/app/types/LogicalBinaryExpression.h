#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogicalBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogicalBinaryExpression__Class** type_info;
        inline app::LogicalBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::LogicalBinaryExpression__Class>(type_info, "System.Linq.Expressions", "LogicalBinaryExpression");
        }
        inline app::LogicalBinaryExpression* create() {
            return il2cpp::create_object<app::LogicalBinaryExpression>(get_class());
        }
    } // namespace LogicalBinaryExpression
} // namespace app::classes::types
