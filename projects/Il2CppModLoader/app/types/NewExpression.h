#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewExpression__Class** type_info;
        inline app::NewExpression__Class* get_class() {
            return il2cpp::get_class<app::NewExpression__Class>(type_info, "System.Linq.Expressions", "NewExpression");
        }
        inline app::NewExpression* create() {
            return il2cpp::create_object<app::NewExpression>(get_class());
        }
    } // namespace NewExpression
} // namespace app::classes::types
