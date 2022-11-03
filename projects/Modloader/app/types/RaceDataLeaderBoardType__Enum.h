#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceDataLeaderBoardType__Enum {
        inline app::RaceDataLeaderBoardType__Enum__Class** type_info = (app::RaceDataLeaderBoardType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476E1F0));
        inline app::RaceDataLeaderBoardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceDataLeaderBoardType__Enum__Class>(type_info, "SystemIntegration.Races", "RaceDataLeaderBoardType");
        }
        inline app::RaceDataLeaderBoardType__Enum* create() {
            return il2cpp::create_object<app::RaceDataLeaderBoardType__Enum>(get_class());
        }
    } // namespace RaceDataLeaderBoardType__Enum
} // namespace app::classes::types
