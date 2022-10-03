#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkInterfaceManager {
        namespace {
            app::NetworkInterfaceManager__Class* type_info_ref = nullptr;
        }
        app::NetworkInterfaceManager__Class** type_info = &type_info_ref;
        inline app::NetworkInterfaceManager__Class* get_class() {
            return il2cpp::get_class<app::NetworkInterfaceManager__Class>(type_info, "nintendoSDKPlugin", "NetworkInterfaceManager");
        }
        inline app::NetworkInterfaceManager* create() {
            return il2cpp::create_object<app::NetworkInterfaceManager>(get_class());
        }
    } // namespace NetworkInterfaceManager
} // namespace app::classes::types
