#pragma once
#include <Modloader/app/structs/RaceLeaderboardAction.h>
#include <Modloader/app/structs/RaceLeaderboardAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardAction {
        inline app::RaceLeaderboardAction__Class** type_info() {
            static app::RaceLeaderboardAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardAction__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardAction__Class>(type_info(), "Moon.Race", "RaceLeaderboardAction");
        }
        inline app::RaceLeaderboardAction* create() {
            return il2cpp::create_object<app::RaceLeaderboardAction>(get_class());
        }
    } // namespace RaceLeaderboardAction
} // namespace app::classes::types
