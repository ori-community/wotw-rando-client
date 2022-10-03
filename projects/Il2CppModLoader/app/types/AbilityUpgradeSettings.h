#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilityUpgradeSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AbilityUpgradeSettings__Class** type_info;
        inline app::AbilityUpgradeSettings__Class* get_class() {
            return il2cpp::get_class<app::AbilityUpgradeSettings__Class>(type_info, "", "AbilityUpgradeSettings");
        }
        inline app::AbilityUpgradeSettings* create() {
            return il2cpp::create_object<app::AbilityUpgradeSettings>(get_class());
        }
    } // namespace AbilityUpgradeSettings
} // namespace app::classes::types
