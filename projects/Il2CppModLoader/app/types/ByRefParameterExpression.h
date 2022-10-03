#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByRefParameterExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByRefParameterExpression__Class** type_info;
        inline app::ByRefParameterExpression__Class* get_class() {
            return il2cpp::get_class<app::ByRefParameterExpression__Class>(type_info, "System.Linq.Expressions", "ByRefParameterExpression");
        }
        inline app::ByRefParameterExpression* create() {
            return il2cpp::create_object<app::ByRefParameterExpression>(get_class());
        }
    } // namespace ByRefParameterExpression
} // namespace app::classes::types
