#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardEntry {
        namespace {
            app::RaceLeaderboardEntry__Class* type_info_ref = nullptr;
        }
        app::RaceLeaderboardEntry__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardEntry__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardEntry__Class>(type_info, "", "RaceLeaderboardEntry");
        }
        inline app::RaceLeaderboardEntry* create() {
            return il2cpp::create_object<app::RaceLeaderboardEntry>(get_class());
        }
        inline app::RaceLeaderboardEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceLeaderboardEntry__Array>(get_class(), size);
        }
    } // namespace RaceLeaderboardEntry
} // namespace app::classes::types
