#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpAssignMethodConversionBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpAssignMethodConversionBinaryExpression__Class** type_info;
        inline app::OpAssignMethodConversionBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::OpAssignMethodConversionBinaryExpression__Class>(type_info, "System.Linq.Expressions", "OpAssignMethodConversionBinaryExpression");
        }
        inline app::OpAssignMethodConversionBinaryExpression* create() {
            return il2cpp::create_object<app::OpAssignMethodConversionBinaryExpression>(get_class());
        }
    } // namespace OpAssignMethodConversionBinaryExpression
} // namespace app::classes::types
