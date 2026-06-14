#pragma once
#include <Modloader/app/structs/LizardSpitAttackBehaviour.h>
#include <Modloader/app/structs/LizardSpitAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardSpitAttackBehaviour {
        inline app::LizardSpitAttackBehaviour__Class** type_info() {
            static app::LizardSpitAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardSpitAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardSpitAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardSpitAttackBehaviour__Class>(type_info(), "Moon", "LizardSpitAttackBehaviour");
        }
        inline app::LizardSpitAttackBehaviour* create() {
            return il2cpp::create_object<app::LizardSpitAttackBehaviour>(get_class());
        }
    } // namespace LizardSpitAttackBehaviour
} // namespace app::classes::types
