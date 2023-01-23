#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t__Class.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t__Boxed.h>

namespace app::classes::types {
    namespace ControllerAnalogActionData_t {
        namespace {
            inline app::ControllerAnalogActionData_t__Class* type_info_ref = nullptr;
        }
        inline app::ControllerAnalogActionData_t__Class** type_info = &type_info_ref;
        inline app::ControllerAnalogActionData_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerAnalogActionData_t__Class>(type_info, "Steamworks", "ControllerAnalogActionData_t");
        }
        inline app::ControllerAnalogActionData_t* create() {
            return il2cpp::create_object<app::ControllerAnalogActionData_t>(get_class());
        }
        inline app::ControllerAnalogActionData_t__Boxed* box(app::ControllerAnalogActionData_t value) {
            return il2cpp::box_value<app::ControllerAnalogActionData_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerAnalogActionData_t
} // namespace app::classes::types
