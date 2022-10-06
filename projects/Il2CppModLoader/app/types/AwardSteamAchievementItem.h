#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementItem {
        namespace {
            app::AwardSteamAchievementItem__Class* type_info_ref = nullptr;
        }
        app::AwardSteamAchievementItem__Class** type_info = &type_info_ref;
        inline app::AwardSteamAchievementItem__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementItem__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementItem");
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
