#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebPermission {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebPermission__Class** type_info;
        inline app::WebPermission__Class* get_class() {
            return il2cpp::get_class<app::WebPermission__Class>(type_info, "System.Net", "WebPermission");
        }
        inline app::WebPermission* create() {
            return il2cpp::create_object<app::WebPermission>(get_class());
        }
    } // namespace WebPermission
} // namespace app::classes::types
