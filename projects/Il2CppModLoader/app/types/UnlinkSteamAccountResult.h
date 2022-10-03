#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkSteamAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkSteamAccountResult__Class** type_info;
        inline app::UnlinkSteamAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkSteamAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkSteamAccountResult");
        }
        inline app::UnlinkSteamAccountResult* create() {
            return il2cpp::create_object<app::UnlinkSteamAccountResult>(get_class());
        }
    } // namespace UnlinkSteamAccountResult
} // namespace app::classes::types
