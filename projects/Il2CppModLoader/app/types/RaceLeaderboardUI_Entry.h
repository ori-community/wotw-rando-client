#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI_Entry {
        namespace {
            app::RaceLeaderboardUI_Entry__Class* type_info_ref = nullptr;
        }
        app::RaceLeaderboardUI_Entry__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardUI_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceLeaderboardUI_Entry__Class>(type_info, "Moon.Race", "RaceLeaderboardUI", "Entry");
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
