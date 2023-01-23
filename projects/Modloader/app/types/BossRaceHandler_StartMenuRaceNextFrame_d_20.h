#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BossRaceHandler_StartMenuRaceNextFrame_d_20__Class.h>
#include <Modloader/app/structs/BossRaceHandler_StartMenuRaceNextFrame_d_20.h>

namespace app::classes::types {
    namespace BossRaceHandler_StartMenuRaceNextFrame_d_20 {
        inline app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class** type_info = (app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class**)(modloader::win::memory::resolve_rva(0x04798BD0));
        inline app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class>(type_info, "", "BossRaceHandler", "<StartMenuRaceNextFrame>d__20");
        }
        inline app::BossRaceHandler_StartMenuRaceNextFrame_d_20* create() {
            return il2cpp::create_object<app::BossRaceHandler_StartMenuRaceNextFrame_d_20>(get_class());
        }
    } // namespace BossRaceHandler_StartMenuRaceNextFrame_d_20
} // namespace app::classes::types
