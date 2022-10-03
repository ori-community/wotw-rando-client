#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemberDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MemberDescriptor__Class** type_info;
        inline app::MemberDescriptor__Class* get_class() {
            return il2cpp::get_class<app::MemberDescriptor__Class>(type_info, "System.ComponentModel", "MemberDescriptor");
        }
        inline app::MemberDescriptor* create() {
            return il2cpp::create_object<app::MemberDescriptor>(get_class());
        }
    } // namespace MemberDescriptor
} // namespace app::classes::types
