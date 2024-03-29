#pragma once
#include <Modloader/app/structs/WindowsIdentity.h>
#include <Modloader/app/structs/WindowsIdentity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindowsIdentity {
        inline app::WindowsIdentity__Class** type_info() {
            static app::WindowsIdentity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WindowsIdentity__Class**)(modloader::win::memory::resolve_rva(0x0473DDE0));
            }
            return cache;
        }
        inline app::WindowsIdentity__Class* get_class() {
            return il2cpp::get_class<app::WindowsIdentity__Class>(type_info(), "System.Security.Principal", "WindowsIdentity");
        }
        inline app::WindowsIdentity* create() {
            return il2cpp::create_object<app::WindowsIdentity>(get_class());
        }
    } // namespace WindowsIdentity
} // namespace app::classes::types
