#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EndpointPermission {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EndpointPermission__Class** type_info;
        inline app::EndpointPermission__Class* get_class() {
            return il2cpp::get_class<app::EndpointPermission__Class>(type_info, "System.Net", "EndpointPermission");
        }
        inline app::EndpointPermission* create() {
            return il2cpp::create_object<app::EndpointPermission>(get_class());
        }
    } // namespace EndpointPermission
} // namespace app::classes::types
