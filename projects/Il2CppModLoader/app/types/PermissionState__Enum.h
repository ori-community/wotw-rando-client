#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PermissionState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PermissionState__Enum__Class** type_info;
        inline app::PermissionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PermissionState__Enum__Class>(type_info, "System.Security.Permissions", "PermissionState");
        }
        inline app::PermissionState__Enum* create() {
            return il2cpp::create_object<app::PermissionState__Enum>(get_class());
        }
    } // namespace PermissionState__Enum
} // namespace app::classes::types
