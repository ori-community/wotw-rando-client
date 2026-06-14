#pragma once
#include <Modloader/app/structs/ServerCommunicator.h>
#include <Modloader/app/structs/ServerCommunicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerCommunicator {
        inline app::ServerCommunicator__Class** type_info() {
            static app::ServerCommunicator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerCommunicator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerCommunicator__Class* get_class() {
            return il2cpp::get_class<app::ServerCommunicator__Class>(type_info(), "Moon.Network.Web", "ServerCommunicator");
        }
        inline app::ServerCommunicator* create() {
            return il2cpp::create_object<app::ServerCommunicator>(get_class());
        }
    } // namespace ServerCommunicator
} // namespace app::classes::types
