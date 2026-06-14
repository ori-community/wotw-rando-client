#pragma once
#include <Modloader/app/structs/PlayerLeaderboardEntry_1__Array.h>
#include <Modloader/app/structs/PlayerLeaderboardEntry_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLeaderboardEntry_1__Array {
        inline app::PlayerLeaderboardEntry_1__Array__Class** type_info() {
            static app::PlayerLeaderboardEntry_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLeaderboardEntry_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLeaderboardEntry_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeaderboardEntry_1__Array__Class>(type_info(), "PlayFab.ServerModels", "PlayerLeaderboardEntry[]");
        }
        inline app::PlayerLeaderboardEntry_1__Array* create() {
            return il2cpp::create_object<app::PlayerLeaderboardEntry_1__Array>(get_class());
        }
    } // namespace PlayerLeaderboardEntry_1__Array
} // namespace app::classes::types
