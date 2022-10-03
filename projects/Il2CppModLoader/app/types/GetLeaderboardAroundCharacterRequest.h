#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundCharacterRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundCharacterRequest__Class** type_info;
        inline app::GetLeaderboardAroundCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundCharacterRequest__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundCharacterRequest");
        }
        inline app::GetLeaderboardAroundCharacterRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundCharacterRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundCharacterRequest
} // namespace app::classes::types
