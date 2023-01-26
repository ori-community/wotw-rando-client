#pragma once
#include <Modloader/app/structs/ReflectionPermission.h>
#include <Modloader/app/structs/ReflectionPermission__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionPermission {
        inline app::ReflectionPermission__Class** type_info() {
            static app::ReflectionPermission__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionPermission__Class**)(modloader::win::memory::resolve_rva(0x047211B0));
            }
            return cache;
        }
        inline app::ReflectionPermission__Class* get_class() {
            return il2cpp::get_class<app::ReflectionPermission__Class>(type_info(), "System.Security.Permissions", "ReflectionPermission");
        }
        inline app::ReflectionPermission* create() {
            return il2cpp::create_object<app::ReflectionPermission>(get_class());
        }
    } // namespace ReflectionPermission
} // namespace app::classes::types
