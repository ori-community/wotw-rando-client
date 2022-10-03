#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputActionSetHandle_t__Array {
        namespace {
            app::InputActionSetHandle_t__Array__Class* type_info_ref = nullptr;
        }
        app::InputActionSetHandle_t__Array__Class** type_info = &type_info_ref;
        inline app::InputActionSetHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::InputActionSetHandle_t__Array__Class>(type_info, "Steamworks", "InputActionSetHandle_t[]");
        }
        inline app::InputActionSetHandle_t__Array* create() {
            return il2cpp::create_object<app::InputActionSetHandle_t__Array>(get_class());
        }
    } // namespace InputActionSetHandle_t__Array
} // namespace app::classes::types
