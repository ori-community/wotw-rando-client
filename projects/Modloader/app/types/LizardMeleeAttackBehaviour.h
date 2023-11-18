#pragma once
#include <Modloader/app/structs/LizardMeleeAttackBehaviour.h>
#include <Modloader/app/structs/LizardMeleeAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardMeleeAttackBehaviour {
        inline app::LizardMeleeAttackBehaviour__Class** type_info() {
            static app::LizardMeleeAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardMeleeAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardMeleeAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardMeleeAttackBehaviour__Class>(type_info(), "Moon", "LizardMeleeAttackBehaviour");
        }
        inline app::LizardMeleeAttackBehaviour* create() {
            return il2cpp::create_object<app::LizardMeleeAttackBehaviour>(get_class());
        }
    } // namespace LizardMeleeAttackBehaviour
} // namespace app::classes::types
