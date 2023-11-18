#pragma once
#include <Modloader/app/structs/InputActionSetHandle_t__Array.h>
#include <Modloader/app/structs/InputActionSetHandle_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputActionSetHandle_t__Array {
        inline app::InputActionSetHandle_t__Array__Class** type_info() {
            static app::InputActionSetHandle_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InputActionSetHandle_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InputActionSetHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::InputActionSetHandle_t__Array__Class>(type_info(), "Steamworks", "InputActionSetHandle_t[]");
        }
        inline app::InputActionSetHandle_t__Array* create() {
            return il2cpp::create_object<app::InputActionSetHandle_t__Array>(get_class());
        }
    } // namespace InputActionSetHandle_t__Array
} // namespace app::classes::types
