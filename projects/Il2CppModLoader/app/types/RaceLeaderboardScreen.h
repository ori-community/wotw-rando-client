#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardScreen {
        namespace {
            inline app::RaceLeaderboardScreen__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardScreen__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardScreen__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardScreen__Class>(type_info, "", "RaceLeaderboardScreen");
        }
        inline app::RaceLeaderboardScreen* create() {
            return il2cpp::create_object<app::RaceLeaderboardScreen>(get_class());
        }
    } // namespace RaceLeaderboardScreen
} // namespace app::classes::types
