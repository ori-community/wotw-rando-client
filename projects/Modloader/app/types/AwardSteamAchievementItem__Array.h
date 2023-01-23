#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AwardSteamAchievementItem__Array__Class.h>
#include <Modloader/app/structs/AwardSteamAchievementItem__Array.h>

namespace app::classes::types {
    namespace AwardSteamAchievementItem__Array {
        namespace {
            inline app::AwardSteamAchievementItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::AwardSteamAchievementItem__Array__Class** type_info = &type_info_ref;
        inline app::AwardSteamAchievementItem__Array__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementItem__Array__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementItem[]");
        }
        inline app::AwardSteamAchievementItem__Array* create() {
            return il2cpp::create_object<app::AwardSteamAchievementItem__Array>(get_class());
        }
    } // namespace AwardSteamAchievementItem__Array
} // namespace app::classes::types
