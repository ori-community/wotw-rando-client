#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardMeleeAttackBehaviour {
        namespace {
            inline app::LizardMeleeAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardMeleeAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardMeleeAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardMeleeAttackBehaviour__Class>(type_info, "Moon", "LizardMeleeAttackBehaviour");
        }
        inline app::LizardMeleeAttackBehaviour* create() {
            return il2cpp::create_object<app::LizardMeleeAttackBehaviour>(get_class());
        }
    } // namespace LizardMeleeAttackBehaviour
} // namespace app::classes::types
