#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardMovementEffects {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LizardMovementEffects__Class** type_info;
        inline app::LizardMovementEffects__Class* get_class() {
            return il2cpp::get_class<app::LizardMovementEffects__Class>(type_info, "", "LizardMovementEffects");
        }
        inline app::LizardMovementEffects* create() {
            return il2cpp::create_object<app::LizardMovementEffects>(get_class());
        }
    } // namespace LizardMovementEffects
} // namespace app::classes::types
