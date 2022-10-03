#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardAroundPlayerResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFriendLeaderboardAroundPlayerResult__Class** type_info;
        inline app::GetFriendLeaderboardAroundPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardAroundPlayerResult__Class>(type_info, "PlayFab.ClientModels", "GetFriendLeaderboardAroundPlayerResult");
        }
        inline app::GetFriendLeaderboardAroundPlayerResult* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardAroundPlayerResult>(get_class());
        }
    } // namespace GetFriendLeaderboardAroundPlayerResult
} // namespace app::classes::types
