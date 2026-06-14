#pragma once
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersRequest {
        inline app::GetLeaderboardForUsersCharactersRequest__Class** type_info() {
            static app::GetLeaderboardForUsersCharactersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardForUsersCharactersRequest__Class**)(modloader::win::memory::resolve_rva(0x04798BB8));
            }
            return cache;
        }
        inline app::GetLeaderboardForUsersCharactersRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersRequest__Class>(type_info(), "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersRequest");
        }
        inline app::GetLeaderboardForUsersCharactersRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersRequest>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersRequest
} // namespace app::classes::types
