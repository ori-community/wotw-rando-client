#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardAction {
        namespace {
            inline app::RaceLeaderboardAction__Class* type_info_ref = nullptr;
        }
        inline app::RaceLeaderboardAction__Class** type_info = &type_info_ref;
        inline app::RaceLeaderboardAction__Class* get_class() {
            return il2cpp::get_class<app::RaceLeaderboardAction__Class>(type_info, "Moon.Race", "RaceLeaderboardAction");
        }
        inline app::RaceLeaderboardAction* create() {
            return il2cpp::create_object<app::RaceLeaderboardAction>(get_class());
        }
    } // namespace RaceLeaderboardAction
} // namespace app::classes::types
