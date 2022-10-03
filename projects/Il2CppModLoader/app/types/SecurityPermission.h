#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityPermission {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityPermission__Class** type_info;
        inline app::SecurityPermission__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermission__Class>(type_info, "System.Security.Permissions", "SecurityPermission");
        }
        inline app::SecurityPermission* create() {
            return il2cpp::create_object<app::SecurityPermission>(get_class());
        }
    } // namespace SecurityPermission
} // namespace app::classes::types
