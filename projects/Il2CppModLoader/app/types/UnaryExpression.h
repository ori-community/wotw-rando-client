#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnaryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnaryExpression__Class** type_info;
        inline app::UnaryExpression__Class* get_class() {
            return il2cpp::get_class<app::UnaryExpression__Class>(type_info, "System.Linq.Expressions", "UnaryExpression");
        }
        inline app::UnaryExpression* create() {
            return il2cpp::create_object<app::UnaryExpression>(get_class());
        }
    } // namespace UnaryExpression
} // namespace app::classes::types
