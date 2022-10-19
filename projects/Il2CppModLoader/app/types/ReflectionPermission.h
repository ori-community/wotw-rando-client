#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionPermission {
        inline app::ReflectionPermission__Class** type_info = (app::ReflectionPermission__Class**)(modloader::win::memory::resolve_rva(0x047211B0));
        inline app::ReflectionPermission__Class* get_class() {
            return il2cpp::get_class<app::ReflectionPermission__Class>(type_info, "System.Security.Permissions", "ReflectionPermission");
        }
        inline app::ReflectionPermission* create() {
            return il2cpp::create_object<app::ReflectionPermission>(get_class());
        }
    } // namespace ReflectionPermission
} // namespace app::classes::types
