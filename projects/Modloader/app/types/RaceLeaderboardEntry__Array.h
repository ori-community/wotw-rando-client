#pragma once
#include <Modloader/app/structs/RaceLeaderboardEntry__Array.h>
#include <Modloader/app/structs/RaceLeaderboardEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardEntry__Array {
        inline app::RaceLeaderboardEntry__Array__Class** type_info() {
            static app::RaceLeaderboardEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardEntry__Array__Class>(type_info(), "", "RaceLeaderboardEntry[]");
        }
        inline app::RaceLeaderboardEntry__Array* create() {
            return il2cpp::create_object<app::RaceLeaderboardEntry__Array>(get_class());
        }
    } // namespace RaceLeaderboardEntry__Array
} // namespace app::classes::types
