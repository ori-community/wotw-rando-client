#pragma once
#include <Modloader/app/structs/LizardGroundChaseBehaviour.h>
#include <Modloader/app/structs/LizardGroundChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardGroundChaseBehaviour {
        inline app::LizardGroundChaseBehaviour__Class** type_info() {
            static app::LizardGroundChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardGroundChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardGroundChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardGroundChaseBehaviour__Class>(type_info(), "Moon", "LizardGroundChaseBehaviour");
        }
        inline app::LizardGroundChaseBehaviour* create() {
            return il2cpp::create_object<app::LizardGroundChaseBehaviour>(get_class());
        }
    } // namespace LizardGroundChaseBehaviour
} // namespace app::classes::types
