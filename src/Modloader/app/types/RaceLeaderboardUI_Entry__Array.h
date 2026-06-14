#pragma once
#include <Modloader/app/structs/RaceLeaderboardUI_Entry__Array.h>
#include <Modloader/app/structs/RaceLeaderboardUI_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI_Entry__Array {
        inline app::RaceLeaderboardUI_Entry__Array__Class** type_info() {
            static app::RaceLeaderboardUI_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardUI_Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardUI_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardUI_Entry__Array__Class>(type_info(), "Moon.Race", "RaceLeaderboardUI+Entry[]");
        }
        inline app::RaceLeaderboardUI_Entry__Array* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI_Entry__Array>(get_class());
        }
    } // namespace RaceLeaderboardUI_Entry__Array
} // namespace app::classes::types
