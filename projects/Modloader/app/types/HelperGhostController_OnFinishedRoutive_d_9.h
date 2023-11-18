#pragma once
#include <Modloader/app/structs/HelperGhostController_OnFinishedRoutive_d_9.h>
#include <Modloader/app/structs/HelperGhostController_OnFinishedRoutive_d_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HelperGhostController_OnFinishedRoutive_d_9 {
        inline app::HelperGhostController_OnFinishedRoutive_d_9__Class** type_info() {
            static app::HelperGhostController_OnFinishedRoutive_d_9__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HelperGhostController_OnFinishedRoutive_d_9__Class**)(modloader::win::memory::resolve_rva(0x0478D918));
            }
            return cache;
        }
        inline app::HelperGhostController_OnFinishedRoutive_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::HelperGhostController_OnFinishedRoutive_d_9__Class>(type_info(), "", "HelperGhostController", "<OnFinishedRoutive>d__9");
        }
        inline app::HelperGhostController_OnFinishedRoutive_d_9* create() {
            return il2cpp::create_object<app::HelperGhostController_OnFinishedRoutive_d_9>(get_class());
        }
    } // namespace HelperGhostController_OnFinishedRoutive_d_9
} // namespace app::classes::types
