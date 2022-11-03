#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardsTitlescreenController {
        namespace {
            inline app::RaceLeaderboardsTitlescreenController__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardsTitlescreenController__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardsTitlescreenController__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardsTitlescreenController__Class>(type_info, "", "RaceLeaderboardsTitlescreenController");
        }
        inline app::RaceLeaderboardsTitlescreenController* create() {
            return il2cpp::create_object<app::RaceLeaderboardsTitlescreenController>(get_class());
        }
    } // namespace RaceLeaderboardsTitlescreenController
} // namespace app::classes::types
