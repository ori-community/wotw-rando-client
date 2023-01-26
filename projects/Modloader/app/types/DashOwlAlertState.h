#pragma once
#include <Modloader/app/structs/DashOwlAlertState.h>
#include <Modloader/app/structs/DashOwlAlertState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlAlertState {
        inline app::DashOwlAlertState__Class** type_info() {
            static app::DashOwlAlertState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlAlertState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlAlertState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlAlertState__Class>(type_info(), "", "DashOwlAlertState");
        }
        inline app::DashOwlAlertState* create() {
            return il2cpp::create_object<app::DashOwlAlertState>(get_class());
        }
    } // namespace DashOwlAlertState
} // namespace app::classes::types
