#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromSteamIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromSteamIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromSteamIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromSteamIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromSteamIDsResult");
        }
        inline app::GetPlayFabIDsFromSteamIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromSteamIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromSteamIDsResult
} // namespace app::classes::types
