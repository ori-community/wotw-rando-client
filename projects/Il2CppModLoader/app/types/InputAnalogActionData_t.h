#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputAnalogActionData_t {
        namespace {
            app::InputAnalogActionData_t__Class* type_info_ref = nullptr;
        }
        app::InputAnalogActionData_t__Class** type_info = &type_info_ref;
        inline app::InputAnalogActionData_t__Class* get_class() {
            return il2cpp::get_class<app::InputAnalogActionData_t__Class>(type_info, "Steamworks", "InputAnalogActionData_t");
        }
        inline app::InputAnalogActionData_t* create() {
            return il2cpp::create_object<app::InputAnalogActionData_t>(get_class());
        }
        inline app::InputAnalogActionData_t__Boxed* box(app::InputAnalogActionData_t value) {
            return il2cpp::box_value<app::InputAnalogActionData_t__Boxed>(get_class(), value);
        }
    } // namespace InputAnalogActionData_t
} // namespace app::classes::types
