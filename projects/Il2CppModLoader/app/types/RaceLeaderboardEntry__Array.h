#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardEntry__Array {
        namespace {
            app::RaceLeaderboardEntry__Array__Class* type_info_ref = nullptr;
        }
        app::RaceLeaderboardEntry__Array__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardEntry__Array__Class>(type_info, "", "RaceLeaderboardEntry[]");
        }
        inline app::RaceLeaderboardEntry__Array* create() {
            return il2cpp::create_object<app::RaceLeaderboardEntry__Array>(get_class());
        }
    } // namespace RaceLeaderboardEntry__Array
} // namespace app::classes::types
