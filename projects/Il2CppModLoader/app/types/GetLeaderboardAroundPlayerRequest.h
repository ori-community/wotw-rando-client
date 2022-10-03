#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetLeaderboardAroundPlayerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetLeaderboardAroundPlayerRequest__Class** type_info;
        inline app::GetLeaderboardAroundPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::GetLeaderboardAroundPlayerRequest__Class>(type_info, "PlayFab.ClientModels", "GetLeaderboardAroundPlayerRequest");
        }
        inline app::GetLeaderboardAroundPlayerRequest* create() {
            return il2cpp::create_object<app::GetLeaderboardAroundPlayerRequest>(get_class());
        }
    } // namespace GetLeaderboardAroundPlayerRequest
} // namespace app::classes::types
