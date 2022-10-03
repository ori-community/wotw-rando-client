#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstantExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstantExpression__Class** type_info;
        inline app::ConstantExpression__Class* get_class() {
            return il2cpp::get_class<app::ConstantExpression__Class>(type_info, "System.Linq.Expressions", "ConstantExpression");
        }
        inline app::ConstantExpression* create() {
            return il2cpp::create_object<app::ConstantExpression>(get_class());
        }
    } // namespace ConstantExpression
} // namespace app::classes::types
