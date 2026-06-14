#pragma once
#include <Modloader/app/structs/LizardLocomotionTurningTimelineBehaviour.h>
#include <Modloader/app/structs/LizardLocomotionTurningTimelineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardLocomotionTurningTimelineBehaviour {
        inline app::LizardLocomotionTurningTimelineBehaviour__Class** type_info() {
            static app::LizardLocomotionTurningTimelineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardLocomotionTurningTimelineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardLocomotionTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardLocomotionTurningTimelineBehaviour__Class>(type_info(), "", "LizardLocomotionTurningTimelineBehaviour");
        }
        inline app::LizardLocomotionTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::LizardLocomotionTurningTimelineBehaviour>(get_class());
        }
    } // namespace LizardLocomotionTurningTimelineBehaviour
} // namespace app::classes::types
