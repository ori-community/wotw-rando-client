#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HelperGhostController_OnFinishedRoutive_d_9 {
        inline app::HelperGhostController_OnFinishedRoutive_d_9__Class** type_info = (app::HelperGhostController_OnFinishedRoutive_d_9__Class**)(modloader::win::memory::resolve_rva(0x0478D918));
        inline app::HelperGhostController_OnFinishedRoutive_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::HelperGhostController_OnFinishedRoutive_d_9__Class>(type_info, "", "HelperGhostController", "<OnFinishedRoutive>d__9");
        }
        inline app::HelperGhostController_OnFinishedRoutive_d_9* create() {
            return il2cpp::create_object<app::HelperGhostController_OnFinishedRoutive_d_9>(get_class());
        }
    } // namespace HelperGhostController_OnFinishedRoutive_d_9
} // namespace app::classes::types
