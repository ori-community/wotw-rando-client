#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CoalesceConversionBinaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CoalesceConversionBinaryExpression__Class** type_info;
        inline app::CoalesceConversionBinaryExpression__Class* get_class() {
            return il2cpp::get_class<app::CoalesceConversionBinaryExpression__Class>(type_info, "System.Linq.Expressions", "CoalesceConversionBinaryExpression");
        }
        inline app::CoalesceConversionBinaryExpression* create() {
            return il2cpp::create_object<app::CoalesceConversionBinaryExpression>(get_class());
        }
    } // namespace CoalesceConversionBinaryExpression
} // namespace app::classes::types
