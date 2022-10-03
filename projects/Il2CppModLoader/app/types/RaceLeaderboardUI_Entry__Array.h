#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI_Entry__Array {
        namespace {
            app::RaceLeaderboardUI_Entry__Array__Class* type_info_ref = nullptr;
        }
        app::RaceLeaderboardUI_Entry__Array__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardUI_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardUI_Entry__Array__Class>(type_info, "Moon.Race", "RaceLeaderboardUI+Entry[]");
        }
        inline app::RaceLeaderboardUI_Entry__Array* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI_Entry__Array>(get_class());
        }
    } // namespace RaceLeaderboardUI_Entry__Array
} // namespace app::classes::types
