#pragma once
#include <Modloader/app/structs/AsymLocomotionTurningTimelineBehaviour.h>
#include <Modloader/app/structs/AsymLocomotionTurningTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymLocomotionTurningTimelineBehaviour {
        inline app::AsymLocomotionTurningTimelineBehaviour__Class** type_info() {
            static app::AsymLocomotionTurningTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsymLocomotionTurningTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsymLocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::AsymLocomotionTurningTimelineBehaviour__Class>(type_info(), "", "AsymLocomotionTurningTimelineBehaviour");
        }
        inline app::AsymLocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::AsymLocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace AsymLocomotionTurningTimelineBehaviour
} // namespace app::classes::types
