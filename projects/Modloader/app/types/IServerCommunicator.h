#pragma once
#include <Modloader/app/structs/IServerCommunicator.h>
#include <Modloader/app/structs/IServerCommunicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IServerCommunicator {
        inline app::IServerCommunicator__Class** type_info() {
            static app::IServerCommunicator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IServerCommunicator__Class**)(modloader::win::memory::resolve_rva(0x04738820));
            }
            return cache;
        }
        inline app::IServerCommunicator__Class* get_class() {
            return il2cpp::get_class<app::IServerCommunicator__Class>(type_info(), "Moon.Network.Web", "IServerCommunicator");
        }
    } // namespace IServerCommunicator
} // namespace app::classes::types
