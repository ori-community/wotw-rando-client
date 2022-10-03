#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardForUsersCharactersRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardForUsersCharactersRequest_1__Class** type_info;
        inline app::GetLeaderboardForUsersCharactersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardForUsersCharactersRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardForUsersCharactersRequest");
        }
        inline app::GetLeaderboardForUsersCharactersRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardForUsersCharactersRequest_1>(get_class());
        }
    } // namespace GetLeaderboardForUsersCharactersRequest_1
} // namespace app::classes::types
