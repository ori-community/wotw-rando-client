#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardMeleeAttackBehaviour_c {
        inline app::LizardMeleeAttackBehaviour_c__Class** type_info = (app::LizardMeleeAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0475FAF8));
        inline app::LizardMeleeAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardMeleeAttackBehaviour_c__Class>(type_info, "Moon", "LizardMeleeAttackBehaviour", "<>c");
        }
        inline app::LizardMeleeAttackBehaviour_c* create() {
            return il2cpp::create_object<app::LizardMeleeAttackBehaviour_c>(get_class());
        }
    } // namespace LizardMeleeAttackBehaviour_c
} // namespace app::classes::types
