#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardScreen_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceLeaderboardScreen_c__Class** type_info;
        inline app::RaceLeaderboardScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceLeaderboardScreen_c__Class>(type_info, "", "RaceLeaderboardScreen", "<>c");
        }
        inline app::RaceLeaderboardScreen_c* create() {
            return il2cpp::create_object<app::RaceLeaderboardScreen_c>(get_class());
        }
    } // namespace RaceLeaderboardScreen_c
} // namespace app::classes::types
