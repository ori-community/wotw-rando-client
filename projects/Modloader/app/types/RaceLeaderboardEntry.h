#pragma once
#include <Modloader/app/structs/RaceLeaderboardEntry.h>
#include <Modloader/app/structs/RaceLeaderboardEntry__Array.h>
#include <Modloader/app/structs/RaceLeaderboardEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardEntry {
        inline app::RaceLeaderboardEntry__Class** type_info() {
            static app::RaceLeaderboardEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardEntry__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardEntry__Class>(type_info(), "", "RaceLeaderboardEntry");
        }
        inline app::RaceLeaderboardEntry* create() {
            return il2cpp::create_object<app::RaceLeaderboardEntry>(get_class());
        }
        inline app::RaceLeaderboardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceLeaderboardEntry__Array>(get_class(), size);
        }
        inline app::RaceLeaderboardEntry__Array* create_array(const std::vector<app::RaceLeaderboardEntry*>& items) {
            return il2cpp::array_new<app::RaceLeaderboardEntry__Array>(get_class(), items);
        }
    } // namespace RaceLeaderboardEntry
} // namespace app::classes::types
