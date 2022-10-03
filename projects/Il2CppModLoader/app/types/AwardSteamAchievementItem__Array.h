#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementItem__Array {
        namespace {
            app::AwardSteamAchievementItem__Array__Class* type_info_ref = nullptr;
        }
        app::AwardSteamAchievementItem__Array__Class** type_info = &type_info_ref;
        inline app::AwardSteamAchievementItem__Array__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementItem__Array__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementItem[]");
        }
        inline app::AwardSteamAchievementItem__Array* create() {
            return il2cpp::create_object<app::AwardSteamAchievementItem__Array>(get_class());
        }
    } // namespace AwardSteamAchievementItem__Array
} // namespace app::classes::types
