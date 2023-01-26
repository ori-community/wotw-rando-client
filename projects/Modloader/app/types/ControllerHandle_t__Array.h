#pragma once
#include <Modloader/app/structs/ControllerHandle_t__Array.h>
#include <Modloader/app/structs/ControllerHandle_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerHandle_t__Array {
        inline app::ControllerHandle_t__Array__Class** type_info() {
            static app::ControllerHandle_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerHandle_t__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::ControllerHandle_t__Array__Class>(type_info(), "Steamworks", "ControllerHandle_t[]");
        }
        inline app::ControllerHandle_t__Array* create() {
            return il2cpp::create_object<app::ControllerHandle_t__Array>(get_class());
        }
    } // namespace ControllerHandle_t__Array
} // namespace app::classes::types
