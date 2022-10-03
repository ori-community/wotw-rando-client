#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionalExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConditionalExpression__Class** type_info;
        inline app::ConditionalExpression__Class* get_class() {
            return il2cpp::get_class<app::ConditionalExpression__Class>(type_info, "System.Linq.Expressions", "ConditionalExpression");
        }
        inline app::ConditionalExpression* create() {
            return il2cpp::create_object<app::ConditionalExpression>(get_class());
        }
    } // namespace ConditionalExpression
} // namespace app::classes::types
