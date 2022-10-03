#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewArrayInitExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewArrayInitExpression__Class** type_info;
        inline app::NewArrayInitExpression__Class* get_class() {
            return il2cpp::get_class<app::NewArrayInitExpression__Class>(type_info, "System.Linq.Expressions", "NewArrayInitExpression");
        }
        inline app::NewArrayInitExpression* create() {
            return il2cpp::create_object<app::NewArrayInitExpression>(get_class());
        }
    } // namespace NewArrayInitExpression
} // namespace app::classes::types
