#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberExpression__Class** type_info;
        inline app::MemberExpression__Class* get_class() {
            return il2cpp::get_class<app::MemberExpression__Class>(type_info, "System.Linq.Expressions", "MemberExpression");
        }
        inline app::MemberExpression* create() {
            return il2cpp::create_object<app::MemberExpression>(get_class());
        }
    } // namespace MemberExpression
} // namespace app::classes::types
