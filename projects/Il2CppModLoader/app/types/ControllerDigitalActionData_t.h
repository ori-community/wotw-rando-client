#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerDigitalActionData_t {
        namespace {
            inline app::ControllerDigitalActionData_t__Class* type_info_ref = nullptr;
        }
        inline app::ControllerDigitalActionData_t__Class** type_info = &type_info_ref;
        inline app::ControllerDigitalActionData_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerDigitalActionData_t__Class>(type_info, "Steamworks", "ControllerDigitalActionData_t");
        }
        inline app::ControllerDigitalActionData_t* create() {
            return il2cpp::create_object<app::ControllerDigitalActionData_t>(get_class());
        }
        inline app::ControllerDigitalActionData_t__Boxed* box(app::ControllerDigitalActionData_t value) {
            return il2cpp::box_value<app::ControllerDigitalActionData_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerDigitalActionData_t
} // namespace app::classes::types
