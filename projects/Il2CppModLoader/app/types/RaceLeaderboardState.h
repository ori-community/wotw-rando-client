#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceLeaderboardState__Class** type_info;
        inline app::RaceLeaderboardState__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardState__Class>(type_info, "", "RaceLeaderboardState");
        }
        inline app::RaceLeaderboardState* create() {
            return il2cpp::create_object<app::RaceLeaderboardState>(get_class());
        }
    } // namespace RaceLeaderboardState
} // namespace app::classes::types
