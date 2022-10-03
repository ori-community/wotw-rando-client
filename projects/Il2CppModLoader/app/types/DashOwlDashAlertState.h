#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlDashAlertState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashOwlDashAlertState__Class** type_info;
        inline app::DashOwlDashAlertState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlDashAlertState__Class>(type_info, "", "DashOwlDashAlertState");
        }
        inline app::DashOwlDashAlertState* create() {
            return il2cpp::create_object<app::DashOwlDashAlertState>(get_class());
        }
    } // namespace DashOwlDashAlertState
} // namespace app::classes::types
