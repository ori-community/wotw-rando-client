#pragma once
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_State__Enum.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour_State__Enum {
        inline app::PiranhaLocomotionSwimmingBehaviour_State__Enum__Class** type_info() {
            static app::PiranhaLocomotionSwimmingBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaLocomotionSwimmingBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PiranhaLocomotionSwimmingBehaviour_State__Enum__Class>(type_info(), "", "PiranhaLocomotionSwimmingBehaviour", "State");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour_State__Enum>(get_class());
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour_State__Enum
} // namespace app::classes::types
