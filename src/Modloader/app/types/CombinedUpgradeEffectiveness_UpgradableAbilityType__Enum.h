#pragma once
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum.h>
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum {
        inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class** type_info() {
            static app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Class>(type_info(), "", "CombinedUpgradeEffectiveness", "UpgradableAbilityType");
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum>(get_class());
        }
    } // namespace CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum
} // namespace app::classes::types
