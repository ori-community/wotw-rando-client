#pragma once
#include <Modloader/app/structs/ControllerActionSetHandle_t__Array.h>
#include <Modloader/app/structs/ControllerActionSetHandle_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerActionSetHandle_t__Array {
        inline app::ControllerActionSetHandle_t__Array__Class** type_info() {
            static app::ControllerActionSetHandle_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerActionSetHandle_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerActionSetHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::ControllerActionSetHandle_t__Array__Class>(type_info(), "Steamworks", "ControllerActionSetHandle_t[]");
        }
        inline app::ControllerActionSetHandle_t__Array* create() {
            return il2cpp::create_object<app::ControllerActionSetHandle_t__Array>(get_class());
        }
    } // namespace ControllerActionSetHandle_t__Array
} // namespace app::classes::types
