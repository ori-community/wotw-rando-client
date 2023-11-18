#pragma once
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbility__Array.h>
#include <Modloader/app/structs/CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbility__Array {
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class** type_info() {
            static app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class* get_class() {
            return il2cpp::get_class<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class>(type_info(), "", "CombinedUpgradeEffectiveness+UpgradableAbility[]");
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array>(get_class());
        }
    } // namespace CombinedUpgradeEffectiveness_UpgradableAbility__Array
} // namespace app::classes::types
