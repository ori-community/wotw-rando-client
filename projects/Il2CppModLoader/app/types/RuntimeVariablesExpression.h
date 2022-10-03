#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeVariablesExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeVariablesExpression__Class** type_info;
        inline app::RuntimeVariablesExpression__Class* get_class() {
            return il2cpp::get_class<app::RuntimeVariablesExpression__Class>(type_info, "System.Linq.Expressions", "RuntimeVariablesExpression");
        }
        inline app::RuntimeVariablesExpression* create() {
            return il2cpp::create_object<app::RuntimeVariablesExpression>(get_class());
        }
    } // namespace RuntimeVariablesExpression
} // namespace app::classes::types
