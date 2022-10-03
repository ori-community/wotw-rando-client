#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLeaderboardEntry_1 {
        namespace {
            app::PlayerLeaderboardEntry_1__Class* type_info_ref = nullptr;
        }
        app::PlayerLeaderboardEntry_1__Class** type_info = &type_info_ref;
        inline app::PlayerLeaderboardEntry_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeaderboardEntry_1__Class>(type_info, "PlayFab.ServerModels", "PlayerLeaderboardEntry");
        }
        inline app::PlayerLeaderboardEntry_1* create() {
            return il2cpp::create_object<app::PlayerLeaderboardEntry_1>(get_class());
        }
        inline app::PlayerLeaderboardEntry_1__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLeaderboardEntry_1__Array>(get_class(), size);
        }
    } // namespace PlayerLeaderboardEntry_1
} // namespace app::classes::types
