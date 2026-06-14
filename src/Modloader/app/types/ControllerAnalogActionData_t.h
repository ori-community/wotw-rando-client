#pragma once
#include <Modloader/app/structs/ControllerAnalogActionData_t.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t__Boxed.h>
#include <Modloader/app/structs/ControllerAnalogActionData_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerAnalogActionData_t {
        inline app::ControllerAnalogActionData_t__Class** type_info() {
            static app::ControllerAnalogActionData_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerAnalogActionData_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerAnalogActionData_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerAnalogActionData_t__Class>(type_info(), "Steamworks", "ControllerAnalogActionData_t");
        }
        inline app::ControllerAnalogActionData_t* create() {
            return il2cpp::create_object<app::ControllerAnalogActionData_t>(get_class());
        }
        inline app::ControllerAnalogActionData_t__Boxed* box(app::ControllerAnalogActionData_t value) {
            return il2cpp::box_value<app::ControllerAnalogActionData_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerAnalogActionData_t
} // namespace app::classes::types
