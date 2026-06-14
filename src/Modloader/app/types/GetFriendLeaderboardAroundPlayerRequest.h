#pragma once
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerRequest.h>
#include <Modloader/app/structs/GetFriendLeaderboardAroundPlayerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardAroundPlayerRequest {
        inline app::GetFriendLeaderboardAroundPlayerRequest__Class** type_info() {
            static app::GetFriendLeaderboardAroundPlayerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendLeaderboardAroundPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x04775A28));
            }
            return cache;
        }
        inline app::GetFriendLeaderboardAroundPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardAroundPlayerRequest__Class>(type_info(), "PlayFab.ClientModels", "GetFriendLeaderboardAroundPlayerRequest");
        }
        inline app::GetFriendLeaderboardAroundPlayerRequest* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardAroundPlayerRequest>(get_class());
        }
    } // namespace GetFriendLeaderboardAroundPlayerRequest
} // namespace app::classes::types
