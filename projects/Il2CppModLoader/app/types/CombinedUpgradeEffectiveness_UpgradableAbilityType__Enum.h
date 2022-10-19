#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum {
        namespace {
            inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class** type_info = &type_info_ref;
        inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class>(type_info, "", "CombinedUpgradeEffectiveness", "UpgradableAbilityType");
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum>(get_class());
        }
    } // namespace CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum
} // namespace app::classes::types
