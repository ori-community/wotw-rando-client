#pragma once
#include <Modloader/app/structs/GetFriendLeaderboardRequest.h>
#include <Modloader/app/structs/GetFriendLeaderboardRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardRequest {
        inline app::GetFriendLeaderboardRequest__Class** type_info() {
            static app::GetFriendLeaderboardRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendLeaderboardRequest__Class**)(modloader::win::memory::resolve_rva(0x047522C8));
            }
            return cache;
        }
        inline app::GetFriendLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardRequest__Class>(type_info(), "PlayFab.ClientModels", "GetFriendLeaderboardRequest");
        }
        inline app::GetFriendLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardRequest>(get_class());
        }
    } // namespace GetFriendLeaderboardRequest
} // namespace app::classes::types
