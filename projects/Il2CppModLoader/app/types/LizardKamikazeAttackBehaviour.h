#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardKamikazeAttackBehaviour {
        namespace {
            app::LizardKamikazeAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::LizardKamikazeAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardKamikazeAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardKamikazeAttackBehaviour__Class>(type_info, "Moon", "LizardKamikazeAttackBehaviour");
        }
        inline app::LizardKamikazeAttackBehaviour* create() {
            return il2cpp::create_object<app::LizardKamikazeAttackBehaviour>(get_class());
        }
    } // namespace LizardKamikazeAttackBehaviour
} // namespace app::classes::types
