#pragma once
#include <Modloader/app/structs/BossRaceHandler_StartMenuRaceNextFrame_d_20.h>
#include <Modloader/app/structs/BossRaceHandler_StartMenuRaceNextFrame_d_20__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossRaceHandler_StartMenuRaceNextFrame_d_20 {
        inline app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class** type_info() {
            static app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class**)(modloader::win::memory::resolve_rva(0x04798BD0));
            }
            return cache;
        }
        inline app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class* get_class() {
            return il2cpp::get_nested_class<app::BossRaceHandler_StartMenuRaceNextFrame_d_20__Class>(type_info(), "", "BossRaceHandler", "<StartMenuRaceNextFrame>d__20");
        }
        inline app::BossRaceHandler_StartMenuRaceNextFrame_d_20* create() {
            return il2cpp::create_object<app::BossRaceHandler_StartMenuRaceNextFrame_d_20>(get_class());
        }
    } // namespace BossRaceHandler_StartMenuRaceNextFrame_d_20
} // namespace app::classes::types
