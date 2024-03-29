#pragma once
#include <Modloader/app/structs/BabySeinRunToTargetAction_Perform_d_6.h>
#include <Modloader/app/structs/BabySeinRunToTargetAction_Perform_d_6__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinRunToTargetAction_Perform_d_6 {
        inline app::BabySeinRunToTargetAction_Perform_d_6__Class** type_info() {
            static app::BabySeinRunToTargetAction_Perform_d_6__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BabySeinRunToTargetAction_Perform_d_6__Class**)(modloader::win::memory::resolve_rva(0x0478B1A8));
            }
            return cache;
        }
        inline app::BabySeinRunToTargetAction_Perform_d_6__Class* get_class() {
            return il2cpp::get_nested_class<app::BabySeinRunToTargetAction_Perform_d_6__Class>(type_info(), "", "BabySeinRunToTargetAction", "<Perform>d__6");
        }
        inline app::BabySeinRunToTargetAction_Perform_d_6* create() {
            return il2cpp::create_object<app::BabySeinRunToTargetAction_Perform_d_6>(get_class());
        }
    } // namespace BabySeinRunToTargetAction_Perform_d_6
} // namespace app::classes::types
