#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardEntry__Array {
        namespace {
            inline app::RaceLeaderboardEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardEntry__Array__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardEntry__Array__Class>(type_info, "", "RaceLeaderboardEntry[]");
        }
        inline app::RaceLeaderboardEntry__Array* create() {
            return il2cpp::create_object<app::RaceLeaderboardEntry__Array>(get_class());
        }
    } // namespace RaceLeaderboardEntry__Array
} // namespace app::classes::types
