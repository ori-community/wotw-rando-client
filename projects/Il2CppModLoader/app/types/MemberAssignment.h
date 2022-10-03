#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberAssignment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberAssignment__Class** type_info;
        inline app::MemberAssignment__Class* get_class() {
            return il2cpp::get_class<app::MemberAssignment__Class>(type_info, "System.Linq.Expressions", "MemberAssignment");
        }
        inline app::MemberAssignment* create() {
            return il2cpp::create_object<app::MemberAssignment>(get_class());
        }
    } // namespace MemberAssignment
} // namespace app::classes::types
