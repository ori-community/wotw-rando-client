#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SystemNetworkCredential {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SystemNetworkCredential__Class** type_info;
        inline app::SystemNetworkCredential__Class* get_class() {
            return il2cpp::get_class<app::SystemNetworkCredential__Class>(type_info, "System.Net", "SystemNetworkCredential");
        }
        inline app::SystemNetworkCredential* create() {
            return il2cpp::create_object<app::SystemNetworkCredential>(get_class());
        }
    } // namespace SystemNetworkCredential
} // namespace app::classes::types
