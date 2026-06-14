#pragma once
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult.h>
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardAroundPlayerResult {
        inline app::GetFriendLeaderboardAroundPlayerResult__Class** type_info() {
            static app::GetFriendLeaderboardAroundPlayerResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendLeaderboardAroundPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x04753280));
            }
            return cache;
        }
        inline app::GetFriendLeaderboardAroundPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardAroundPlayerResult__Class>(type_info(), "PlayFab.ClientModels", "GetFriendLeaderboardAroundPlayerResult");
        }
        inline app::GetFriendLeaderboardAroundPlayerResult* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardAroundPlayerResult>(get_class());
        }
    } // namespace GetFriendLeaderboardAroundPlayerResult
} // namespace app::classes::types
