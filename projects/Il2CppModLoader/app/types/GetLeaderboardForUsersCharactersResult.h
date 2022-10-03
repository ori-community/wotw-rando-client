#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardForUsersCharactersResult__Class** type_info;
        inline app::GetLeaderboardForUsersCharactersResult__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersResult__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardForUsersCharactersResult");
        }
        inline app::GetLeaderboardForUsersCharactersResult* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersResult>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersResult
} // namespace app::classes::types
