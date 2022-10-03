#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamedPermissionSet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NamedPermissionSet__Class** type_info;
        inline app::NamedPermissionSet__Class* get_class() {
            return il2cpp::get_class<app::NamedPermissionSet__Class>(type_info, "System.Security", "NamedPermissionSet");
        }
        inline app::NamedPermissionSet* create() {
            return il2cpp::create_object<app::NamedPermissionSet>(get_class());
        }
    } // namespace NamedPermissionSet
} // namespace app::classes::types
