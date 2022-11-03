#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AwardSteamAchievementRequest {
        inline app::AwardSteamAchievementRequest__Class** type_info = (app::AwardSteamAchievementRequest__Class**)(modloader::win::memory::resolve_rva(0x04754F08));
        inline app::AwardSteamAchievementRequest__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementRequest__Class>(type_info, "PlayFab.ServerModels", "AwardSteamAchievementRequest");
        }
        inline app::AwardSteamAchievementRequest* create() {
            return il2cpp::create_object<app::AwardSteamAchievementRequest>(get_class());
        }
    } // namespace AwardSteamAchievementRequest
} // namespace app::classes::types
