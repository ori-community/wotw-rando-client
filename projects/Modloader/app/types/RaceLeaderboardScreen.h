#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceLeaderboardScreen__Class.h>
#include <Modloader/app/structs/RaceLeaderboardScreen.h>

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
