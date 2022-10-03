#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TryExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TryExpression__Class** type_info;
        inline app::TryExpression__Class* get_class() {
            return il2cpp::get_class<app::TryExpression__Class>(type_info, "System.Linq.Expressions", "TryExpression");
        }
        inline app::TryExpression* create() {
            return il2cpp::create_object<app::TryExpression>(get_class());
        }
    } // namespace TryExpression
} // namespace app::classes::types
