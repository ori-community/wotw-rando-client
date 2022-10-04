#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IOneDSTransportPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IOneDSTransportPlugin__Class** type_info;
        inline app::IOneDSTransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::IOneDSTransportPlugin__Class>(type_info, "PlayFab", "IOneDSTransportPlugin");
        }
        inline app::IOneDSTransportPlugin* create() {
            return il2cpp::create_object<app::IOneDSTransportPlugin>(get_class());
        }
    } // namespace IOneDSTransportPlugin
} // namespace app::classes::types
