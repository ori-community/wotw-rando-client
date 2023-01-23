#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceLeaderboardState__Class.h>
#include <Modloader/app/structs/RaceLeaderboardState.h>

namespace app::classes::types {
    namespace RaceLeaderboardState {
        inline app::RaceLeaderboardState__Class** type_info = (app::RaceLeaderboardState__Class**)(modloader::win::memory::resolve_rva(0x04794A90));
        inline app::RaceLeaderboardState__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardState__Class>(type_info, "", "RaceLeaderboardState");
        }
        inline app::RaceLeaderboardState* create() {
            return il2cpp::create_object<app::RaceLeaderboardState>(get_class());
        }
    } // namespace RaceLeaderboardState
} // namespace app::classes::types
