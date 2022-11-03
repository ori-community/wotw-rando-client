#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersRequest {
        inline app::GetLeaderboardForUsersCharactersRequest__Class** type_info = (app::GetLeaderboardForUsersCharactersRequest__Class**)(modloader::win::memory::resolve_rva(0x04798BB8));
        inline app::GetLeaderboardForUsersCharactersRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersRequest__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersRequest");
        }
        inline app::GetLeaderboardForUsersCharactersRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersRequest>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersRequest
} // namespace app::classes::types
