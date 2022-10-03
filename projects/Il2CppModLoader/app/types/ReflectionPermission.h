#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionPermission {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionPermission__Class** type_info;
        inline app::ReflectionPermission__Class* get_class() {
            return il2cpp::get_class<app::ReflectionPermission__Class>(type_info, "System.Security.Permissions", "ReflectionPermission");
        }
        inline app::ReflectionPermission* create() {
            return il2cpp::create_object<app::ReflectionPermission>(get_class());
        }
    } // namespace ReflectionPermission
} // namespace app::classes::types
