#pragma once
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour.h>
#include <Modloader/app/structs/PiranhaLocomotionSwimmingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaLocomotionSwimmingBehaviour {
        inline app::PiranhaLocomotionSwimmingBehaviour__Class** type_info() {
            static app::PiranhaLocomotionSwimmingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaLocomotionSwimmingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaLocomotionSwimmingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaLocomotionSwimmingBehaviour__Class>(type_info(), "", "PiranhaLocomotionSwimmingBehaviour");
        }
        inline app::PiranhaLocomotionSwimmingBehaviour* create() {
            return il2cpp::create_object<app::PiranhaLocomotionSwimmingBehaviour>(get_class());
        }
    } // namespace PiranhaLocomotionSwimmingBehaviour
} // namespace app::classes::types
