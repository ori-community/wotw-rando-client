#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerRankedOnLeaderboardVersionEventData {
        namespace {
            inline app::PlayerRankedOnLeaderboardVersionEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerRankedOnLeaderboardVersionEventData__Class** type_info = &type_info_ref;
        inline app::PlayerRankedOnLeaderboardVersionEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerRankedOnLeaderboardVersionEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerRankedOnLeaderboardVersionEventData");
        }
        inline app::PlayerRankedOnLeaderboardVersionEventData* create() {
            return il2cpp::create_object<app::PlayerRankedOnLeaderboardVersionEventData>(get_class());
        }
    } // namespace PlayerRankedOnLeaderboardVersionEventData
} // namespace app::classes::types
