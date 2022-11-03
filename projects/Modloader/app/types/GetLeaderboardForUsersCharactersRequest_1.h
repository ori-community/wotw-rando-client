#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersRequest_1 {
        inline app::GetLeaderboardForUsersCharactersRequest_1__Class** type_info = (app::GetLeaderboardForUsersCharactersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0470D8D0));
        inline app::GetLeaderboardForUsersCharactersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardForUsersCharactersRequest");
        }
        inline app::GetLeaderboardForUsersCharactersRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersRequest_1>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersRequest_1
} // namespace app::classes::types
