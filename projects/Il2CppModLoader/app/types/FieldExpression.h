#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FieldExpression__Class** type_info;
        inline app::FieldExpression__Class* get_class() {
            return il2cpp::get_class<app::FieldExpression__Class>(type_info, "System.Linq.Expressions", "FieldExpression");
        }
        inline app::FieldExpression* create() {
            return il2cpp::create_object<app::FieldExpression>(get_class());
        }
    } // namespace FieldExpression
} // namespace app::classes::types
