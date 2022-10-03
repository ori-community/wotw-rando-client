#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowsIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindowsIdentity__Class** type_info;
        inline app::WindowsIdentity__Class* get_class() {
            return il2cpp::get_class<app::WindowsIdentity__Class>(type_info, "System.Security.Principal", "WindowsIdentity");
        }
        inline app::WindowsIdentity* create() {
            return il2cpp::create_object<app::WindowsIdentity>(get_class());
        }
    } // namespace WindowsIdentity
} // namespace app::classes::types
