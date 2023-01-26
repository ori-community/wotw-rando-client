#pragma once
#include <Modloader/app/structs/RaceLeaderboardUI.h>
#include <Modloader/app/structs/RaceLeaderboardUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI {
        inline app::RaceLeaderboardUI__Class** type_info() {
            static app::RaceLeaderboardUI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardUI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardUI__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardUI__Class>(type_info(), "Moon.Race", "RaceLeaderboardUI");
        }
        inline app::RaceLeaderboardUI* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI>(get_class());
        }
    } // namespace RaceLeaderboardUI
} // namespace app::classes::types
