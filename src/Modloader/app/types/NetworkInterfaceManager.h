#pragma once
#include <Modloader/app/structs/NetworkInterfaceManager.h>
#include <Modloader/app/structs/NetworkInterfaceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetworkInterfaceManager {
        inline app::NetworkInterfaceManager__Class** type_info() {
            static app::NetworkInterfaceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NetworkInterfaceManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NetworkInterfaceManager__Class* get_class() {
            return il2cpp::get_class<app::NetworkInterfaceManager__Class>(type_info(), "nintendoSDKPlugin", "NetworkInterfaceManager");
        }
        inline app::NetworkInterfaceManager* create() {
            return il2cpp::create_object<app::NetworkInterfaceManager>(get_class());
        }
    } // namespace NetworkInterfaceManager
} // namespace app::classes::types
