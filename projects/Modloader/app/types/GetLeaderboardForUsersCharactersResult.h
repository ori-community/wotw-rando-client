#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult__Class.h>
#include <Modloader/app/structs/GetLeaderboardForUsersCharactersResult.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersResult {
        inline app::GetLeaderboardForUsersCharactersResult__Class** type_info = (app::GetLeaderboardForUsersCharactersResult__Class**)(modloader::win::memory::resolve_rva(0x0471DFC0));
        inline app::GetLeaderboardForUsersCharactersResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersResult");
        }
        inline app::GetLeaderboardForUsersCharactersResult* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersResult>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersResult
} // namespace app::classes::types
