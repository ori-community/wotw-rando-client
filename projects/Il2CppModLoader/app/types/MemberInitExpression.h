#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberInitExpression {
        inline app::MemberInitExpression__Class** type_info = (app::MemberInitExpression__Class**)(modloader::win::memory::resolve_rva(0x0472B7C0));
        inline app::MemberInitExpression__Class* get_class() {
            return il2cpp::get_class<app::MemberInitExpression__Class>(type_info, "System.Linq.Expressions", "MemberInitExpression");
        }
        inline app::MemberInitExpression* create() {
            return il2cpp::create_object<app::MemberInitExpression>(get_class());
        }
    } // namespace MemberInitExpression
} // namespace app::classes::types
