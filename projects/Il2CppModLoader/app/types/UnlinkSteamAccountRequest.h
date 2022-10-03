#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkSteamAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkSteamAccountRequest__Class** type_info;
        inline app::UnlinkSteamAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkSteamAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkSteamAccountRequest");
        }
        inline app::UnlinkSteamAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkSteamAccountRequest>(get_class());
        }
    } // namespace UnlinkSteamAccountRequest
} // namespace app::classes::types
