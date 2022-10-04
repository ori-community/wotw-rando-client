#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IServerCommunicator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IServerCommunicator__Class** type_info;
        inline app::IServerCommunicator__Class* get_class() {
            return il2cpp::get_class<app::IServerCommunicator__Class>(type_info, "Moon.Network.Web", "IServerCommunicator");
        }
    } // namespace IServerCommunicator
} // namespace app::classes::types
