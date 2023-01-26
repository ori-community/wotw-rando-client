#pragma once
#include <Modloader/app/structs/AwardSteamAchievementItem__Array.h>
#include <Modloader/app/structs/AwardSteamAchievementItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementItem__Array {
        inline app::AwardSteamAchievementItem__Array__Class** type_info() {
            static app::AwardSteamAchievementItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AwardSteamAchievementItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AwardSteamAchievementItem__Array__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementItem__Array__Class>(type_info(), "PlayFab.ServerModels", "AwardSteamAchievementItem[]");
        }
        inline app::AwardSteamAchievementItem__Array* create() {
            return il2cpp::create_object<app::AwardSteamAchievementItem__Array>(get_class());
        }
    } // namespace AwardSteamAchievementItem__Array
} // namespace app::classes::types
