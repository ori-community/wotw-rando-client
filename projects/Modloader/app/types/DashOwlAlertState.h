#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashOwlAlertState__Class.h>
#include <Modloader/app/structs/DashOwlAlertState.h>

namespace app::classes::types {
    namespace DashOwlAlertState {
        namespace {
            inline app::DashOwlAlertState__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlAlertState__Class** type_info = &type_info_ref;
        inline app::DashOwlAlertState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlAlertState__Class>(type_info, "", "DashOwlAlertState");
        }
        inline app::DashOwlAlertState* create() {
            return il2cpp::create_object<app::DashOwlAlertState>(get_class());
        }
    } // namespace DashOwlAlertState
} // namespace app::classes::types
