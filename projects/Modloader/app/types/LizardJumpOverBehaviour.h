#pragma once
#include <Modloader/app/structs/LizardJumpOverBehaviour.h>
#include <Modloader/app/structs/LizardJumpOverBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardJumpOverBehaviour {
        inline app::LizardJumpOverBehaviour__Class** type_info() {
            static app::LizardJumpOverBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardJumpOverBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardJumpOverBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardJumpOverBehaviour__Class>(type_info(), "Moon", "LizardJumpOverBehaviour");
        }
        inline app::LizardJumpOverBehaviour* create() {
            return il2cpp::create_object<app::LizardJumpOverBehaviour>(get_class());
        }
    } // namespace LizardJumpOverBehaviour
} // namespace app::classes::types
