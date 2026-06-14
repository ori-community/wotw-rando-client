#pragma once
#include <Modloader/app/structs/AwardSteamAchievementItem.h>
#include <Modloader/app/structs/AwardSteamAchievementItem__Array.h>
#include <Modloader/app/structs/AwardSteamAchievementItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementItem {
        inline app::AwardSteamAchievementItem__Class** type_info() {
            static app::AwardSteamAchievementItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AwardSteamAchievementItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AwardSteamAchievementItem__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementItem__Class>(type_info(), "PlayFab.ServerModels", "AwardSteamAchievementItem");
        }
        inline app::AwardSteamAchievementItem* create() {
            return il2cpp::create_object<app::AwardSteamAchievementItem>(get_class());
        }
        inline app::AwardSteamAchievementItem__Array* create_array(int size) {
            return il2cpp::array_new<app::AwardSteamAchievementItem__Array>(get_class(), size);
        }
        inline app::AwardSteamAchievementItem__Array* create_array(const std::vector<app::AwardSteamAchievementItem*>& items) {
            return il2cpp::array_new<app::AwardSteamAchievementItem__Array>(get_class(), items);
        }
    } // namespace AwardSteamAchievementItem
} // namespace app::classes::types
