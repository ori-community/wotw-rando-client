#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AwardSteamAchievementRequest__Class** type_info;
        inline app::AwardSteamAchievementRequest__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementRequest__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementRequest");
        }
        inline app::AwardSteamAchievementRequest* create() {
            return il2cpp::create_object<app::AwardSteamAchievementRequest>(get_class());
        }
    } // namespace AwardSteamAchievementRequest
} // namespace app::classes::types
