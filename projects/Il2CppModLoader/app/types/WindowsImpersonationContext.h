#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindowsImpersonationContext {
        inline app::WindowsImpersonationContext__Class** type_info = (app::WindowsImpersonationContext__Class**)(modloader::win::memory::resolve_rva(0x04712C88));
        inline app::WindowsImpersonationContext__Class* get_class() {
            return il2cpp::get_class<app::WindowsImpersonationContext__Class>(type_info, "System.Security.Principal", "WindowsImpersonationContext");
        }
        inline app::WindowsImpersonationContext* create() {
            return il2cpp::create_object<app::WindowsImpersonationContext>(get_class());
        }
    } // namespace WindowsImpersonationContext
} // namespace app::classes::types
