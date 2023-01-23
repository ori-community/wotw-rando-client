#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceLeaderboardUI__Class.h>
#include <Modloader/app/structs/RaceLeaderboardUI.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI {
        namespace {
            inline app::RaceLeaderboardUI__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardUI__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardUI__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardUI__Class>(type_info, "Moon.Race", "RaceLeaderboardUI");
        }
        inline app::RaceLeaderboardUI* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI>(get_class());
        }
    } // namespace RaceLeaderboardUI
} // namespace app::classes::types
