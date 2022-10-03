#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberMemberBinding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberMemberBinding__Class** type_info;
        inline app::MemberMemberBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberMemberBinding__Class>(type_info, "System.Linq.Expressions", "MemberMemberBinding");
        }
        inline app::MemberMemberBinding* create() {
            return il2cpp::create_object<app::MemberMemberBinding>(get_class());
        }
    } // namespace MemberMemberBinding
} // namespace app::classes::types
