#pragma once
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour.h>
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardKamikazeAttackBehaviour {
        inline app::LizardKamikazeAttackBehaviour__Class** type_info() {
            static app::LizardKamikazeAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardKamikazeAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardKamikazeAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardKamikazeAttackBehaviour__Class>(type_info(), "Moon", "LizardKamikazeAttackBehaviour");
        }
        inline app::LizardKamikazeAttackBehaviour* create() {
            return il2cpp::create_object<app::LizardKamikazeAttackBehaviour>(get_class());
        }
    } // namespace LizardKamikazeAttackBehaviour
} // namespace app::classes::types
