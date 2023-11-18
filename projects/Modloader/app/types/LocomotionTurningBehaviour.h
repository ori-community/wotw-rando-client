#pragma once
#include <Modloader/app/structs/LocomotionTurningBehaviour.h>
#include <Modloader/app/structs/LocomotionTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionTurningBehaviour {
        inline app::LocomotionTurningBehaviour__Class** type_info() {
            static app::LocomotionTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LocomotionTurningBehaviour__Class>(type_info(), "", "LocomotionTurningBehaviour");
        }
        inline app::LocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::LocomotionTurningBehaviour>(get_class());
        }
    } // namespace LocomotionTurningBehaviour
} // namespace app::classes::types
