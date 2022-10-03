#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberFilter__Class** type_info;
        inline app::MemberFilter__Class* get_class() {
            return il2cpp::get_class<app::MemberFilter__Class>(type_info, "System.Reflection", "MemberFilter");
        }
        inline app::MemberFilter* create() {
            return il2cpp::create_object<app::MemberFilter>(get_class());
        }
    } // namespace MemberFilter
} // namespace app::classes::types
