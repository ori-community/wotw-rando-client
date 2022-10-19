#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITransportPlugin {
        inline app::ITransportPlugin__Class** type_info = (app::ITransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04724460));
        inline app::ITransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::ITransportPlugin__Class>(type_info, "PlayFab", "ITransportPlugin");
        }
    } // namespace ITransportPlugin
} // namespace app::classes::types
