#pragma once
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbility.h>
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbility__Array.h>
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbility {
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Class** type_info() {
            static app::CombinedUpgradeEffectiveness_UpgradableAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CombinedUpgradeEffectiveness_UpgradableAbility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Class* get_class() {
            return il2cpp::get_nested_class<app::CombinedUpgradeEffectiveness_UpgradableAbility__Class>(type_info(), "", "CombinedUpgradeEffectiveness", "UpgradableAbility");
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness_UpgradableAbility>(get_class());
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array* create_array(int size) {
            return il2cpp::array_new<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array>(get_class(), size);
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array* create_array(const std::vector<app::CombinedUpgradeEffectiveness_UpgradableAbility*>& items) {
            return il2cpp::array_new<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array>(get_class(), items);
        }
    } // namespace CombinedUpgradeEffectiveness_UpgradableAbility
} // namespace app::classes::types
