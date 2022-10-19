#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerLeaderboardEntry_1__Array {
        namespace {
            inline app::PlayerLeaderboardEntry_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLeaderboardEntry_1__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLeaderboardEntry_1__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLeaderboardEntry_1__Array__Class>(type_info, "PlayFab.ServerModels", "PlayerLeaderboardEntry[]");
        }
        inline app::PlayerLeaderboardEntry_1__Array* create() {
            return il2cpp::create_object<app::PlayerLeaderboardEntry_1__Array>(get_class());
        }
    } // namespace PlayerLeaderboardEntry_1__Array
} // namespace app::classes::types
