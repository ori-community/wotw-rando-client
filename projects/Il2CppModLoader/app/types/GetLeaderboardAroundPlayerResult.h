#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundPlayerResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundPlayerResult__Class** type_info;
        inline app::GetLeaderboardAroundPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundPlayerResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundPlayerResult");
        }
        inline app::GetLeaderboardAroundPlayerResult* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundPlayerResult>(get_class());
        }
    } // namespace GetLeaderboardAroundPlayerResult
} // namespace app::classes::types
