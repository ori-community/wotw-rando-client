#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RacePrepareState_ShowFlythroughUi_d_9 {
        inline app::RacePrepareState_ShowFlythroughUi_d_9__Class** type_info = (app::RacePrepareState_ShowFlythroughUi_d_9__Class**)(modloader::win::memory::resolve_rva(0x04722458));
        inline app::RacePrepareState_ShowFlythroughUi_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::RacePrepareState_ShowFlythroughUi_d_9__Class>(type_info, "", "RacePrepareState", "<ShowFlythroughUi>d__9");
        }
        inline app::RacePrepareState_ShowFlythroughUi_d_9* create() {
            return il2cpp::create_object<app::RacePrepareState_ShowFlythroughUi_d_9>(get_class());
        }
    } // namespace RacePrepareState_ShowFlythroughUi_d_9
} // namespace app::classes::types
