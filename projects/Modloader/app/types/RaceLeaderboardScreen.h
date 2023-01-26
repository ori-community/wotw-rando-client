#pragma once
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#include <Modloader/app/structs/RaceLeaderboardScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardScreen {
        inline app::RaceLeaderboardScreen__Class** type_info() {
            static app::RaceLeaderboardScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardScreen__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardScreen__Class>(type_info(), "", "RaceLeaderboardScreen");
        }
        inline app::RaceLeaderboardScreen* create() {
            return il2cpp::create_object<app::RaceLeaderboardScreen>(get_class());
        }
    } // namespace RaceLeaderboardScreen
} // namespace app::classes::types
