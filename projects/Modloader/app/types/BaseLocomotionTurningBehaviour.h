#pragma once
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseLocomotionTurningBehaviour {
        inline app::BaseLocomotionTurningBehaviour__Class** type_info() {
            static app::BaseLocomotionTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaseLocomotionTurningBehaviour__Class>(type_info(), "", "BaseLocomotionTurningBehaviour");
        }
        inline app::BaseLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::BaseLocomotionTurningBehaviour>(get_class());
        }
    } // namespace BaseLocomotionTurningBehaviour
} // namespace app::classes::types
