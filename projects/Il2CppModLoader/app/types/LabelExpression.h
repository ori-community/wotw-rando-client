#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LabelExpression__Class** type_info;
        inline app::LabelExpression__Class* get_class() {
            return il2cpp::get_class<app::LabelExpression__Class>(type_info, "System.Linq.Expressions", "LabelExpression");
        }
        inline app::LabelExpression* create() {
            return il2cpp::create_object<app::LabelExpression>(get_class());
        }
    } // namespace LabelExpression
} // namespace app::classes::types
