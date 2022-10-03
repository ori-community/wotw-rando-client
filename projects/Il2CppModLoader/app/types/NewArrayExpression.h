#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewArrayExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewArrayExpression__Class** type_info;
        inline app::NewArrayExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayExpression__Class>(type_info, "System.Linq.Expressions", "NewArrayExpression");
        }
        inline app::NewArrayExpression* create() {
            return il2cpp::create_object<app::NewArrayExpression>(get_class());
        }
    } // namespace NewArrayExpression
} // namespace app::classes::types
