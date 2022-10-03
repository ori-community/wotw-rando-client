#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityPermissionFlag__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityPermissionFlag__Enum__Class** type_info;
        inline app::SecurityPermissionFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermissionFlag__Enum__Class>(type_info, "System.Security.Permissions", "SecurityPermissionFlag");
        }
        inline app::SecurityPermissionFlag__Enum* create() {
            return il2cpp::create_object<app::SecurityPermissionFlag__Enum>(get_class());
        }
    } // namespace SecurityPermissionFlag__Enum
} // namespace app::classes::types
