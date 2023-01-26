#pragma once
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest_1.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersRequest_1 {
        inline app::GetLeaderboardForUsersCharactersRequest_1__Class** type_info() {
            static app::GetLeaderboardForUsersCharactersRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardForUsersCharactersRequest_1__Class**)(modloader::win::memory::resolve_rva(0x0470D8D0));
            }
            return cache;
        }
        inline app::GetLeaderboardForUsersCharactersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetLeaderboardForUsersCharactersRequest");
        }
        inline app::GetLeaderboardForUsersCharactersRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersRequest_1>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersRequest_1
} // namespace app::classes::types
