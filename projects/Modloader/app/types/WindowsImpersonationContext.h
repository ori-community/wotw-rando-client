#pragma once
#include <Modloader/app/structs/WindowsImpersonationContext.h>
#include <Modloader/app/structs/WindowsImpersonationContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindowsImpersonationContext {
        inline app::WindowsImpersonationContext__Class** type_info() {
            static app::WindowsImpersonationContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WindowsImpersonationContext__Class**)(modloader::win::memory::resolve_rva(0x04712C88));
            }
            return cache;
        }
        inline app::WindowsImpersonationContext__Class* get_class() {
            return il2cpp::get_class<app::WindowsImpersonationContext__Class>(type_info(), "System.Security.Principal", "WindowsImpersonationContext");
        }
        inline app::WindowsImpersonationContext* create() {
            return il2cpp::create_object<app::WindowsImpersonationContext>(get_class());
        }
    } // namespace WindowsImpersonationContext
} // namespace app::classes::types
