#pragma once
#include <Modloader/app/structs/InputAnalogActionData_t.h>
#include <Modloader/app/structs/InputAnalogActionData_t__Boxed.h>
#include <Modloader/app/structs/InputAnalogActionData_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputAnalogActionData_t {
        inline app::InputAnalogActionData_t__Class** type_info() {
            static app::InputAnalogActionData_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputAnalogActionData_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputAnalogActionData_t__Class* get_class() {
            return il2cpp::get_class<app::InputAnalogActionData_t__Class>(type_info(), "Steamworks", "InputAnalogActionData_t");
        }
        inline app::InputAnalogActionData_t* create() {
            return il2cpp::create_object<app::InputAnalogActionData_t>(get_class());
        }
        inline app::InputAnalogActionData_t__Boxed* box(app::InputAnalogActionData_t value) {
            return il2cpp::box_value<app::InputAnalogActionData_t__Boxed>(get_class(), value);
        }
    } // namespace InputAnalogActionData_t
} // namespace app::classes::types
