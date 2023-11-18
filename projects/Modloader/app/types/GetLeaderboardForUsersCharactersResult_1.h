#pragma once
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult_1.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersResult_1 {
        inline app::GetLeaderboardForUsersCharactersResult_1__Class** type_info() {
            static app::GetLeaderboardForUsersCharactersResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardForUsersCharactersResult_1__Class**)(modloader::win::memory::resolve_rva(0x04745618));
            }
            return cache;
        }
        inline app::GetLeaderboardForUsersCharactersResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetLeaderboardForUsersCharactersResult");
        }
        inline app::GetLeaderboardForUsersCharactersResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersResult_1>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersResult_1
} // namespace app::classes::types
