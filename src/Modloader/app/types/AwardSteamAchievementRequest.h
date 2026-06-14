#pragma once
#include <Modloader/app/structs/AwardSteamAchievementRequest.h>
#include <Modloader/app/structs/AwardSteamAchievementRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AwardSteamAchievementRequest {
        inline app::AwardSteamAchievementRequest__Class** type_info() {
            static app::AwardSteamAchievementRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AwardSteamAchievementRequest__Class**)(modloader::win::memory::resolve_rva(0x04754F08));
            }
            return cache;
        }
        inline app::AwardSteamAchievementRequest__Class* get_class() {
            return il2cpp::get_class<app::AwardSteamAchievementRequest__Class>(type_info(), "PlayFab.ServerModels", "AwardSteamAchievementRequest");
        }
        inline app::AwardSteamAchievementRequest* create() {
            return il2cpp::create_object<app::AwardSteamAchievementRequest>(get_class());
        }
    } // namespace AwardSteamAchievementRequest
} // namespace app::classes::types
