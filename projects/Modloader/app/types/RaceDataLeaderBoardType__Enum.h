#pragma once
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum.h>
#include <Modloader/app/structs/RaceDataLeaderBoardType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceDataLeaderBoardType__Enum {
        inline app::RaceDataLeaderBoardType__Enum__Class** type_info() {
            static app::RaceDataLeaderBoardType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceDataLeaderBoardType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476E1F0));
            }
            return cache;
        }
        inline app::RaceDataLeaderBoardType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceDataLeaderBoardType__Enum__Class>(type_info(), "SystemIntegration.Races", "RaceDataLeaderBoardType");
        }
        inline app::RaceDataLeaderBoardType__Enum* create() {
            return il2cpp::create_object<app::RaceDataLeaderBoardType__Enum>(get_class());
        }
    } // namespace RaceDataLeaderBoardType__Enum
} // namespace app::classes::types
