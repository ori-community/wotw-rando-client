#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NetworkInterfaceManager__Class.h>
#include <Modloader/app/structs/NetworkInterfaceManager.h>

namespace app::classes::types {
    namespace NetworkInterfaceManager {
        namespace {
            inline app::NetworkInterfaceManager__Class* type_info_ref = nullptr;
        }
        inline app::NetworkInterfaceManager__Class** type_info = &type_info_ref;
        inline app::NetworkInterfaceManager__Class* get_class() {
            return il2cpp::get_class<app::NetworkInterfaceManager__Class>(type_info, "nintendoSDKPlugin", "NetworkInterfaceManager");
        }
        inline app::NetworkInterfaceManager* create() {
            return il2cpp::create_object<app::NetworkInterfaceManager>(get_class());
        }
    } // namespace NetworkInterfaceManager
} // namespace app::classes::types
