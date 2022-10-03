#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IndexExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IndexExpression__Class** type_info;
        inline app::IndexExpression__Class* get_class() {
            return il2cpp::get_class<app::IndexExpression__Class>(type_info, "System.Linq.Expressions", "IndexExpression");
        }
        inline app::IndexExpression* create() {
            return il2cpp::create_object<app::IndexExpression>(get_class());
        }
    } // namespace IndexExpression
} // namespace app::classes::types
