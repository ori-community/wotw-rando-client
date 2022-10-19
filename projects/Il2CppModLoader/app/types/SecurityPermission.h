#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityPermission {
        inline app::SecurityPermission__Class** type_info = (app::SecurityPermission__Class**)(modloader::win::memory::resolve_rva(0x0476F818));
        inline app::SecurityPermission__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermission__Class>(type_info, "System.Security.Permissions", "SecurityPermission");
        }
        inline app::SecurityPermission* create() {
            return il2cpp::create_object<app::SecurityPermission>(get_class());
        }
    } // namespace SecurityPermission
} // namespace app::classes::types
