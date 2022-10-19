#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IOneDSTransportPlugin {
        inline app::IOneDSTransportPlugin__Class** type_info = (app::IOneDSTransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04704B50));
        inline app::IOneDSTransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::IOneDSTransportPlugin__Class>(type_info, "PlayFab", "IOneDSTransportPlugin");
        }
    } // namespace IOneDSTransportPlugin
} // namespace app::classes::types
