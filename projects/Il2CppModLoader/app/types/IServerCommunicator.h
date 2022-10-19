#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IServerCommunicator {
        inline app::IServerCommunicator__Class** type_info = (app::IServerCommunicator__Class**)(modloader::win::memory::resolve_rva(0x04738820));
        inline app::IServerCommunicator__Class* get_class() {
            return il2cpp::get_class<app::IServerCommunicator__Class>(type_info, "Moon.Network.Web", "IServerCommunicator");
        }
    } // namespace IServerCommunicator
} // namespace app::classes::types
