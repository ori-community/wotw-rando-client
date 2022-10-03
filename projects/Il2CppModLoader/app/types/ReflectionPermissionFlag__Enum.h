#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionPermissionFlag__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionPermissionFlag__Enum__Class** type_info;
        inline app::ReflectionPermissionFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReflectionPermissionFlag__Enum__Class>(type_info, "System.Security.Permissions", "ReflectionPermissionFlag");
        }
        inline app::ReflectionPermissionFlag__Enum* create() {
            return il2cpp::create_object<app::ReflectionPermissionFlag__Enum>(get_class());
        }
    } // namespace ReflectionPermissionFlag__Enum
} // namespace app::classes::types
