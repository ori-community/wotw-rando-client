#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardAttackEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LizardAttackEffects__Class** type_info;
        inline app::LizardAttackEffects__Class* get_class() {
            return il2cpp::get_class<app::LizardAttackEffects__Class>(type_info, "", "LizardAttackEffects");
        }
        inline app::LizardAttackEffects* create() {
            return il2cpp::create_object<app::LizardAttackEffects>(get_class());
        }
    } // namespace LizardAttackEffects
} // namespace app::classes::types
