#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardMeleeAttackBehaviour_AttackType__Enum {
        namespace {
            inline app::LizardMeleeAttackBehaviour_AttackType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LizardMeleeAttackBehaviour_AttackType__Enum__Class** type_info = &type_info_ref;
        inline app::LizardMeleeAttackBehaviour_AttackType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardMeleeAttackBehaviour_AttackType__Enum__Class>(type_info, "Moon", "LizardMeleeAttackBehaviour", "AttackType");
        }
        inline app::LizardMeleeAttackBehaviour_AttackType__Enum* create() {
            return il2cpp::create_object<app::LizardMeleeAttackBehaviour_AttackType__Enum>(get_class());
        }
    } // namespace LizardMeleeAttackBehaviour_AttackType__Enum
} // namespace app::classes::types
