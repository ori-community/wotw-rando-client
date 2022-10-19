#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SystemNetworkCredential {
        inline app::SystemNetworkCredential__Class** type_info = (app::SystemNetworkCredential__Class**)(modloader::win::memory::resolve_rva(0x047278A0));
        inline app::SystemNetworkCredential__Class* get_class() {
            return il2cpp::get_class<app::SystemNetworkCredential__Class>(type_info, "System.Net", "SystemNetworkCredential");
        }
        inline app::SystemNetworkCredential* create() {
            return il2cpp::create_object<app::SystemNetworkCredential>(get_class());
        }
    } // namespace SystemNetworkCredential
} // namespace app::classes::types
