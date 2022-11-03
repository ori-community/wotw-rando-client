#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI_Entry__Array {
        namespace {
            inline app::RaceLeaderboardUI_Entry__Array__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardUI_Entry__Array__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardUI_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardUI_Entry__Array__Class>(type_info, "Moon.Race", "RaceLeaderboardUI+Entry[]");
        }
        inline app::RaceLeaderboardUI_Entry__Array* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI_Entry__Array>(get_class());
        }
    } // namespace RaceLeaderboardUI_Entry__Array
} // namespace app::classes::types
