#pragma once
#include <Modloader/app/structs/RaceLeaderboardState.h>
#include <Modloader/app/structs/RaceLeaderboardState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardState {
        inline app::RaceLeaderboardState__Class** type_info() {
            static app::RaceLeaderboardState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceLeaderboardState__Class**)(modloader::win::memory::resolve_rva(0x04794A90));
            }
            return cache;
        }
        inline app::RaceLeaderboardState__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardState__Class>(type_info(), "", "RaceLeaderboardState");
        }
        inline app::RaceLeaderboardState* create() {
            return il2cpp::create_object<app::RaceLeaderboardState>(get_class());
        }
    } // namespace RaceLeaderboardState
} // namespace app::classes::types
