#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AwardSteamAchievementResult__Class** type_info;
        inline app::AwardSteamAchievementResult__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementResult__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementResult");
        }
        inline app::AwardSteamAchievementResult* create() {
            return il2cpp::create_object<app::AwardSteamAchievementResult>(get_class());
        }
    } // namespace AwardSteamAchievementResult
} // namespace app::classes::types
