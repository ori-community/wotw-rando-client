#pragma once
#include <Modloader/app/structs/DashOwlDashAlertState.h>
#include <Modloader/app/structs/DashOwlDashAlertState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlDashAlertState {
        inline app::DashOwlDashAlertState__Class** type_info() {
            static app::DashOwlDashAlertState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlDashAlertState__Class**)(modloader::win::memory::resolve_rva(0x04736340));
            }
            return cache;
        }
        inline app::DashOwlDashAlertState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlDashAlertState__Class>(type_info(), "", "DashOwlDashAlertState");
        }
        inline app::DashOwlDashAlertState* create() {
            return il2cpp::create_object<app::DashOwlDashAlertState>(get_class());
        }
    } // namespace DashOwlDashAlertState
} // namespace app::classes::types
