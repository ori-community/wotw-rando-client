#pragma once
#include <Modloader/app/structs/GetFriendLeaderboardRequest_1.h>
#include <Modloader/app/structs/GetFriendLeaderboardRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardRequest_1 {
        inline app::GetFriendLeaderboardRequest_1__Class** type_info() {
            static app::GetFriendLeaderboardRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetFriendLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04765760));
            }
            return cache;
        }
        inline app::GetFriendLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetFriendLeaderboardRequest");
        }
        inline app::GetFriendLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardRequest_1>(get_class());
        }
    } // namespace GetFriendLeaderboardRequest_1
} // namespace app::classes::types
