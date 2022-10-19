#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlDashAlertState {
        inline app::DashOwlDashAlertState__Class** type_info = (app::DashOwlDashAlertState__Class**)(modloader::win::memory::resolve_rva(0x04736340));
        inline app::DashOwlDashAlertState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlDashAlertState__Class>(type_info, "", "DashOwlDashAlertState");
        }
        inline app::DashOwlDashAlertState* create() {
            return il2cpp::create_object<app::DashOwlDashAlertState>(get_class());
        }
    } // namespace DashOwlDashAlertState
} // namespace app::classes::types
