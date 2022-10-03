#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PermissionSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PermissionSet__Class** type_info;
        inline app::PermissionSet__Class* get_class() {
            return il2cpp::get_class<app::PermissionSet__Class>(type_info, "System.Security", "PermissionSet");
        }
        inline app::PermissionSet* create() {
            return il2cpp::create_object<app::PermissionSet>(get_class());
        }
    } // namespace PermissionSet
} // namespace app::classes::types
