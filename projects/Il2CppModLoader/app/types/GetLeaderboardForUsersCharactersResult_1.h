#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardForUsersCharactersResult_1__Class** type_info;
        inline app::GetLeaderboardForUsersCharactersResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersResult_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardForUsersCharactersResult");
        }
        inline app::GetLeaderboardForUsersCharactersResult_1* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersResult_1>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersResult_1
} // namespace app::classes::types
