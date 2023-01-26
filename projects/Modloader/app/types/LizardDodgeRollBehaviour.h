#pragma once
#include <Modloader/app/structs/LizardDodgeRollBehaviour.h>
#include <Modloader/app/structs/LizardDodgeRollBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardDodgeRollBehaviour {
        inline app::LizardDodgeRollBehaviour__Class** type_info() {
            static app::LizardDodgeRollBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardDodgeRollBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardDodgeRollBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeRollBehaviour__Class>(type_info(), "Moon", "LizardDodgeRollBehaviour");
        }
        inline app::LizardDodgeRollBehaviour* create() {
            return il2cpp::create_object<app::LizardDodgeRollBehaviour>(get_class());
        }
    } // namespace LizardDodgeRollBehaviour
} // namespace app::classes::types
