#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindowsIdentity {
        inline app::WindowsIdentity__Class** type_info = (app::WindowsIdentity__Class**)(modloader::win::memory::resolve_rva(0x0473DDE0));
        inline app::WindowsIdentity__Class* get_class() {
            return il2cpp::get_class<app::WindowsIdentity__Class>(type_info, "System.Security.Principal", "WindowsIdentity");
        }
        inline app::WindowsIdentity* create() {
            return il2cpp::create_object<app::WindowsIdentity>(get_class());
        }
    } // namespace WindowsIdentity
} // namespace app::classes::types
