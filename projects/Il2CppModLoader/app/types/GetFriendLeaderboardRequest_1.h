#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetFriendLeaderboardRequest_1 {
        inline app::GetFriendLeaderboardRequest_1__Class** type_info = (app::GetFriendLeaderboardRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04765760));
        inline app::GetFriendLeaderboardRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetFriendLeaderboardRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetFriendLeaderboardRequest");
        }
        inline app::GetFriendLeaderboardRequest_1* create() {
            return il2cpp::create_object<app::GetFriendLeaderboardRequest_1>(get_class());
        }
    } // namespace GetFriendLeaderboardRequest_1
} // namespace app::classes::types
