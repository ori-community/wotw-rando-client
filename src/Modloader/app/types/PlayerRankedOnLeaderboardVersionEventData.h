#pragma once
#include <Modloader/app/structs/PlayerRankedOnLeaderboardVersionEventData.h>
#include <Modloader/app/structs/PlayerRankedOnLeaderboardVersionEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerRankedOnLeaderboardVersionEventData {
        inline app::PlayerRankedOnLeaderboardVersionEventData__Class** type_info() {
            static app::PlayerRankedOnLeaderboardVersionEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerRankedOnLeaderboardVersionEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerRankedOnLeaderboardVersionEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRankedOnLeaderboardVersionEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerRankedOnLeaderboardVersionEventData");
        }
        inline app::PlayerRankedOnLeaderboardVersionEventData* create() {
            return il2cpp::create_object<app::PlayerRankedOnLeaderboardVersionEventData>(get_class());
        }
    } // namespace PlayerRankedOnLeaderboardVersionEventData
} // namespace app::classes::types
