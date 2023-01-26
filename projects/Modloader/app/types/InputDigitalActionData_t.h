#pragma once
#include <Modloader/app/structs/InputDigitalActionData_t.h>
#include <Modloader/app/structs/InputDigitalActionData_t__Boxed.h>
#include <Modloader/app/structs/InputDigitalActionData_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputDigitalActionData_t {
        inline app::InputDigitalActionData_t__Class** type_info() {
            static app::InputDigitalActionData_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputDigitalActionData_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputDigitalActionData_t__Class* get_class() {
            return il2cpp::get_class<app::InputDigitalActionData_t__Class>(type_info(), "Steamworks", "InputDigitalActionData_t");
        }
        inline app::InputDigitalActionData_t* create() {
            return il2cpp::create_object<app::InputDigitalActionData_t>(get_class());
        }
        inline app::InputDigitalActionData_t__Boxed* box(app::InputDigitalActionData_t value) {
            return il2cpp::box_value<app::InputDigitalActionData_t__Boxed>(get_class(), value);
        }
    } // namespace InputDigitalActionData_t
} // namespace app::classes::types
