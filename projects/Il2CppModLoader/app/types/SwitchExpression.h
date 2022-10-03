#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwitchExpression__Class** type_info;
        inline app::SwitchExpression__Class* get_class() {
            return il2cpp::get_class<app::SwitchExpression__Class>(type_info, "System.Linq.Expressions", "SwitchExpression");
        }
        inline app::SwitchExpression* create() {
            return il2cpp::create_object<app::SwitchExpression>(get_class());
        }
    } // namespace SwitchExpression
} // namespace app::classes::types
