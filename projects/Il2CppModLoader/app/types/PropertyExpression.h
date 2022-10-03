#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyExpression__Class** type_info;
        inline app::PropertyExpression__Class* get_class() {
            return il2cpp::get_class<app::PropertyExpression__Class>(type_info, "System.Linq.Expressions", "PropertyExpression");
        }
        inline app::PropertyExpression* create() {
            return il2cpp::create_object<app::PropertyExpression>(get_class());
        }
    } // namespace PropertyExpression
} // namespace app::classes::types
