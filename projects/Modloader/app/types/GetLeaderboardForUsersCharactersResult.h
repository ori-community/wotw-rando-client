#pragma once
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersResult {
        inline app::GetLeaderboardForUsersCharactersResult__Class** type_info() {
            static app::GetLeaderboardForUsersCharactersResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetLeaderboardForUsersCharactersResult__Class**)(modloader::win::memory::resolve_rva(0x0471DFC0));
            }
            return cache;
        }
        inline app::GetLeaderboardForUsersCharactersResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersResult__Class>(type_info(), "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersResult");
        }
        inline app::GetLeaderboardForUsersCharactersResult* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersResult>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersResult
} // namespace app::classes::types
