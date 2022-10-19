#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardUI_c {
        inline app::RaceLeaderboardUI_c__Class** type_info = (app::RaceLeaderboardUI_c__Class**)(modloader::win::memory::resolve_rva(0x047426F8));
        inline app::RaceLeaderboardUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceLeaderboardUI_c__Class>(type_info, "Moon.Race", "RaceLeaderboardUI", "<>c");
        }
        inline app::RaceLeaderboardUI_c* create() {
            return il2cpp::create_object<app::RaceLeaderboardUI_c>(get_class());
        }
    } // namespace RaceLeaderboardUI_c
} // namespace app::classes::types
