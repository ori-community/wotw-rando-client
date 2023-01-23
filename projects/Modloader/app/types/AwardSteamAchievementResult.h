#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AwardSteamAchievementResult__Class.h>
#include <Modloader/app/structs/AwardSteamAchievementResult.h>

namespace app::classes::types {
    namespace AwardSteamAchievementResult {
        inline app::AwardSteamAchievementResult__Class** type_info = (app::AwardSteamAchievementResult__Class**)(modloader::win::memory::resolve_rva(0x04796BC0));
        inline app::AwardSteamAchievementResult__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementResult__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementResult");
        }
        inline app::AwardSteamAchievementResult* create() {
            return il2cpp::create_object<app::AwardSteamAchievementResult>(get_class());
        }
    } // namespace AwardSteamAchievementResult
} // namespace app::classes::types
