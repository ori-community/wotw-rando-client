#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardEntry {
        namespace {
            inline app::RaceLeaderboardEntry__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardEntry__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardEntry__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardEntry__Class>(type_info, "", "RaceLeaderboardEntry");
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
