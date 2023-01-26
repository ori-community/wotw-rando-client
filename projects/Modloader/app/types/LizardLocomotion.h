#pragma once
#include <Modloader/app/structs/LizardLocomotion.h>
#include <Modloader/app/structs/LizardLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardLocomotion {
        inline app::LizardLocomotion__Class** type_info() {
            static app::LizardLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardLocomotion__Class* get_class() {
            return il2cpp::get_class<app::LizardLocomotion__Class>(type_info(), "", "LizardLocomotion");
        }
        inline app::LizardLocomotion* create() {
            return il2cpp::create_object<app::LizardLocomotion>(get_class());
        }
    } // namespace LizardLocomotion
} // namespace app::classes::types
