#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowsImpersonationContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WindowsImpersonationContext__Class** type_info;
        inline app::WindowsImpersonationContext__Class* get_class() {
            return il2cpp::get_class<app::WindowsImpersonationContext__Class>(type_info, "System.Security.Principal", "WindowsImpersonationContext");
        }
        inline app::WindowsImpersonationContext* create() {
            return il2cpp::create_object<app::WindowsImpersonationContext>(get_class());
        }
    } // namespace WindowsImpersonationContext
} // namespace app::classes::types
