#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundCharacterRequest_1__Class** type_info;
        inline app::GetLeaderboardAroundCharacterRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetLeaderboardAroundCharacterRequest");
        }
        inline app::GetLeaderboardAroundCharacterRequest_1* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterRequest_1>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterRequest_1
} // namespace app::classes::types
