#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITransportPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITransportPlugin__Class** type_info;
        inline app::ITransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::ITransportPlugin__Class>(type_info, "PlayFab", "ITransportPlugin");
        }
    } // namespace ITransportPlugin
} // namespace app::classes::types
