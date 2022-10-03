#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFriendLeaderboardRequest__Class** type_info;
        inline app::GetFriendLeaderboardRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardRequest__Class>(type_info, "PlayFab.ClientModels", "GetFriendLeaderboardRequest");
        }
        inline app::GetFriendLeaderboardRequest* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardRequest>(get_class());
        }
    } // namespace GetFriendLeaderboardRequest
} // namespace app::classes::types
