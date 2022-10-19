#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardAroundPlayerResult {
        inline app::GetFriendLeaderboardAroundPlayerResult__Class** type_info = (app::GetFriendLeaderboardAroundPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x04753280));
        inline app::GetFriendLeaderboardAroundPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardAroundPlayerResult__Class>(type_info, "PlayFab.ClientModels", "GetFriendLeaderboardAroundPlayerResult");
        }
        inline app::GetFriendLeaderboardAroundPlayerResult* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardAroundPlayerResult>(get_class());
        }
    } // namespace GetFriendLeaderboardAroundPlayerResult
} // namespace app::classes::types
