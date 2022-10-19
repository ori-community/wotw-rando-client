#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputDigitalActionData_t {
        namespace {
            inline app::InputDigitalActionData_t__Class* type_info_ref = nullptr;
        }
        inline app::InputDigitalActionData_t__Class** type_info = &type_info_ref;
        inline app::InputDigitalActionData_t__Class* get_class() {
            return il2cpp::get_class<app::InputDigitalActionData_t__Class>(type_info, "Steamworks", "InputDigitalActionData_t");
        }
        inline app::InputDigitalActionData_t* create() {
            return il2cpp::create_object<app::InputDigitalActionData_t>(get_class());
        }
        inline app::InputDigitalActionData_t__Boxed* box(app::InputDigitalActionData_t value) {
            return il2cpp::box_value<app::InputDigitalActionData_t__Boxed>(get_class(), value);
        }
    } // namespace InputDigitalActionData_t
} // namespace app::classes::types
