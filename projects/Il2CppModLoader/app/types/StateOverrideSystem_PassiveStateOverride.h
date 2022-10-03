#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateOverrideSystem_PassiveStateOverride {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateOverrideSystem_PassiveStateOverride__Class** type_info;
        inline app::StateOverrideSystem_PassiveStateOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::StateOverrideSystem_PassiveStateOverride__Class>(type_info, "", "StateOverrideSystem", "PassiveStateOverride");
        }
        inline app::StateOverrideSystem_PassiveStateOverride* create() {
            return il2cpp::create_object<app::StateOverrideSystem_PassiveStateOverride>(get_class());
        }
        inline app::StateOverrideSystem_PassiveStateOverride__Boxed* box(app::StateOverrideSystem_PassiveStateOverride value) {
            return il2cpp::box_value<app::StateOverrideSystem_PassiveStateOverride__Boxed>(get_class(), value);
        }
    } // namespace StateOverrideSystem_PassiveStateOverride
} // namespace app::classes::types
