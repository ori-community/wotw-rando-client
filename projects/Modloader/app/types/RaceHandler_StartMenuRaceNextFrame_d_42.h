#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceHandler_StartMenuRaceNextFrame_d_42__Class.h>
#include <Modloader/app/structs/RaceHandler_StartMenuRaceNextFrame_d_42.h>

namespace app::classes::types {
    namespace RaceHandler_StartMenuRaceNextFrame_d_42 {
        inline app::RaceHandler_StartMenuRaceNextFrame_d_42__Class** type_info = (app::RaceHandler_StartMenuRaceNextFrame_d_42__Class**)(modloader::win::memory::resolve_rva(0x047986C0));
        inline app::RaceHandler_StartMenuRaceNextFrame_d_42__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceHandler_StartMenuRaceNextFrame_d_42__Class>(type_info, "", "RaceHandler", "<StartMenuRaceNextFrame>d__42");
        }
        inline app::RaceHandler_StartMenuRaceNextFrame_d_42* create() {
            return il2cpp::create_object<app::RaceHandler_StartMenuRaceNextFrame_d_42>(get_class());
        }
    } // namespace RaceHandler_StartMenuRaceNextFrame_d_42
} // namespace app::classes::types
