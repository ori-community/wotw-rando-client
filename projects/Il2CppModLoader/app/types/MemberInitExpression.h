#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberInitExpression {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberInitExpression__Class** type_info;
        inline app::MemberInitExpression__Class* get_class() {
            return il2cpp::get_class<app::MemberInitExpression__Class>(type_info, "System.Linq.Expressions", "MemberInitExpression");
        }
        inline app::MemberInitExpression* create() {
            return il2cpp::create_object<app::MemberInitExpression>(get_class());
        }
    } // namespace MemberInitExpression
} // namespace app::classes::types
