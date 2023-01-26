#pragma once
#include <Modloader/app/structs/LizardMeleeAttackBehaviour_AttackType__Enum.h>
#include <Modloader/app/structs/LizardMeleeAttackBehaviour_AttackType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardMeleeAttackBehaviour_AttackType__Enum {
        inline app::LizardMeleeAttackBehaviour_AttackType__Enum__Class** type_info() {
            static app::LizardMeleeAttackBehaviour_AttackType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardMeleeAttackBehaviour_AttackType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardMeleeAttackBehaviour_AttackType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardMeleeAttackBehaviour_AttackType__Enum__Class>(type_info(), "Moon", "LizardMeleeAttackBehaviour", "AttackType");
        }
        inline app::LizardMeleeAttackBehaviour_AttackType__Enum* create() {
            return il2cpp::create_object<app::LizardMeleeAttackBehaviour_AttackType__Enum>(get_class());
        }
    } // namespace LizardMeleeAttackBehaviour_AttackType__Enum
} // namespace app::classes::types
