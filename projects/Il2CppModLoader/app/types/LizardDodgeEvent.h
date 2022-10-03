#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardDodgeEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LizardDodgeEvent__Class** type_info;
        inline app::LizardDodgeEvent__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeEvent__Class>(type_info, "", "LizardDodgeEvent");
        }
        inline app::LizardDodgeEvent* create() {
            return il2cpp::create_object<app::LizardDodgeEvent>(get_class());
        }
    } // namespace LizardDodgeEvent
} // namespace app::classes::types
