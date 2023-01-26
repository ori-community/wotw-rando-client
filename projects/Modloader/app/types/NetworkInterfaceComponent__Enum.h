#pragma once
#include <Modloader/app/structs/NetworkInterfaceComponent__Enum.h>
#include <Modloader/app/structs/NetworkInterfaceComponent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetworkInterfaceComponent__Enum {
        inline app::NetworkInterfaceComponent__Enum__Class** type_info() {
            static app::NetworkInterfaceComponent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NetworkInterfaceComponent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NetworkInterfaceComponent__Enum__Class* get_class() {
            return il2cpp::get_class<app::NetworkInterfaceComponent__Enum__Class>(type_info(), "System.Net.NetworkInformation", "NetworkInterfaceComponent");
        }
        inline app::NetworkInterfaceComponent__Enum* create() {
            return il2cpp::create_object<app::NetworkInterfaceComponent__Enum>(get_class());
        }
    } // namespace NetworkInterfaceComponent__Enum
} // namespace app::classes::types
