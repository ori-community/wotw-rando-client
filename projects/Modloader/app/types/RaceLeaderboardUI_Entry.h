#pragma once
#include <Modloader/app/structs/RaceLeaderboardUI_Entry.h>
#include <Modloader/app/structs/RaceLeaderboardUI_Entry__Array.h>
#include <Modloader/app/structs/RaceLeaderboardUI_Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI_Entry {
        inline app::RaceLeaderboardUI_Entry__Class** type_info() {
            static app::RaceLeaderboardUI_Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceLeaderboardUI_Entry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceLeaderboardUI_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceLeaderboardUI_Entry__Class>(type_info(), "Moon.Race", "RaceLeaderboardUI", "Entry");
        }
        inline app::RaceLeaderboardUI_Entry* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI_Entry>(get_class());
        }
        inline app::RaceLeaderboardUI_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceLeaderboardUI_Entry__Array>(get_class(), size);
        }
        inline app::RaceLeaderboardUI_Entry__Array* create_array(const std::vector<app::RaceLeaderboardUI_Entry*>& items) {
            return il2cpp::array_new<app::RaceLeaderboardUI_Entry__Array>(get_class(), items);
        }
    } // namespace RaceLeaderboardUI_Entry
} // namespace app::classes::types
