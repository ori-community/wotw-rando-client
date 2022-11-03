#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EscapeRaceHandler_StartMenuRaceNextFrame_d_21 {
        inline app::EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class** type_info = (app::EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class**)(modloader::win::memory::resolve_rva(0x0471C488));
        inline app::EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class* get_class() {
            return il2cpp::get_nested_class<app::EscapeRaceHandler_StartMenuRaceNextFrame_d_21__Class>(type_info, "Moon.Race", "EscapeRaceHandler", "<StartMenuRaceNextFrame>d__21");
        }
        inline app::EscapeRaceHandler_StartMenuRaceNextFrame_d_21* create() {
            return il2cpp::create_object<app::EscapeRaceHandler_StartMenuRaceNextFrame_d_21>(get_class());
        }
    } // namespace EscapeRaceHandler_StartMenuRaceNextFrame_d_21
} // namespace app::classes::types
