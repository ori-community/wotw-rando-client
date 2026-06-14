#pragma once
#include <Modloader/app/structs/LizardMeleeAttackBehaviour_c.h>
#include <Modloader/app/structs/LizardMeleeAttackBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardMeleeAttackBehaviour_c {
        inline app::LizardMeleeAttackBehaviour_c__Class** type_info() {
            static app::LizardMeleeAttackBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LizardMeleeAttackBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0475FAF8));
            }
            return cache;
        }
        inline app::LizardMeleeAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardMeleeAttackBehaviour_c__Class>(type_info(), "Moon", "LizardMeleeAttackBehaviour", "<>c");
        }
        inline app::LizardMeleeAttackBehaviour_c* create() {
            return il2cpp::create_object<app::LizardMeleeAttackBehaviour_c>(get_class());
        }
    } // namespace LizardMeleeAttackBehaviour_c
} // namespace app::classes::types
