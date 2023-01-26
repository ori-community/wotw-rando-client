#pragma once
#include <Modloader/app/structs/SystemNetworkCredential.h>
#include <Modloader/app/structs/SystemNetworkCredential__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemNetworkCredential {
        inline app::SystemNetworkCredential__Class** type_info() {
            static app::SystemNetworkCredential__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SystemNetworkCredential__Class**)(modloader::win::memory::resolve_rva(0x047278A0));
            }
            return cache;
        }
        inline app::SystemNetworkCredential__Class* get_class() {
            return il2cpp::get_class<app::SystemNetworkCredential__Class>(type_info(), "System.Net", "SystemNetworkCredential");
        }
        inline app::SystemNetworkCredential* create() {
            return il2cpp::create_object<app::SystemNetworkCredential>(get_class());
        }
    } // namespace SystemNetworkCredential
} // namespace app::classes::types
