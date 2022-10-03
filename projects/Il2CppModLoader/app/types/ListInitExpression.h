#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListInitExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListInitExpression__Class** type_info;
        inline app::ListInitExpression__Class* get_class() {
            return il2cpp::get_class<app::ListInitExpression__Class>(type_info, "System.Linq.Expressions", "ListInitExpression");
        }
        inline app::ListInitExpression* create() {
            return il2cpp::create_object<app::ListInitExpression>(get_class());
        }
    } // namespace ListInitExpression
} // namespace app::classes::types
