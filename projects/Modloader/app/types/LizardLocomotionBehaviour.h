#pragma once
#include <Modloader/app/structs/LizardLocomotionBehaviour.h>
#include <Modloader/app/structs/LizardLocomotionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardLocomotionBehaviour {
        inline app::LizardLocomotionBehaviour__Class** type_info() {
            static app::LizardLocomotionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardLocomotionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardLocomotionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardLocomotionBehaviour__Class>(type_info(), "", "LizardLocomotionBehaviour");
        }
        inline app::LizardLocomotionBehaviour* create() {
            return il2cpp::create_object<app::LizardLocomotionBehaviour>(get_class());
        }
    } // namespace LizardLocomotionBehaviour
} // namespace app::classes::types
