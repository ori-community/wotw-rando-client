#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberListBinding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberListBinding__Class** type_info;
        inline app::MemberListBinding__Class* get_class() {
            return il2cpp::get_class<app::MemberListBinding__Class>(type_info, "System.Linq.Expressions", "MemberListBinding");
        }
        inline app::MemberListBinding* create() {
            return il2cpp::create_object<app::MemberListBinding>(get_class());
        }
    } // namespace MemberListBinding
} // namespace app::classes::types
