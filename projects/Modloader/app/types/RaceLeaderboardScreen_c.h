#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceLeaderboardScreen_c {
        inline app::RaceLeaderboardScreen_c__Class** type_info = (app::RaceLeaderboardScreen_c__Class**)(modloader::win::memory::resolve_rva(0x0471FDC8));
        inline app::RaceLeaderboardScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceLeaderboardScreen_c__Class>(type_info, "", "RaceLeaderboardScreen", "<>c");
        }
        inline app::RaceLeaderboardScreen_c* create() {
            return il2cpp::create_object<app::RaceLeaderboardScreen_c>(get_class());
        }
    } // namespace RaceLeaderboardScreen_c
} // namespace app::classes::types
