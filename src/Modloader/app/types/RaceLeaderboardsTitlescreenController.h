#pragma once
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController.h>
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardsTitlescreenController {
        inline app::RaceLeaderboardsTitlescreenController__Class** type_info() {
            static app::RaceLeaderboardsTitlescreenController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardsTitlescreenController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardsTitlescreenController__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardsTitlescreenController__Class>(type_info(), "", "RaceLeaderboardsTitlescreenController");
        }
        inline app::RaceLeaderboardsTitlescreenController* create() {
            return il2cpp::create_object<app::RaceLeaderboardsTitlescreenController>(get_class());
        }
    } // namespace RaceLeaderboardsTitlescreenController
} // namespace app::classes::types
