#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbility {
        namespace {
            inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Class* type_info_ref = nullptr;
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Class** type_info = &type_info_ref;
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Class* get_class() {
            return il2cpp::get_nested_class<app::CombinedUpgradeEffectiveness_UpgradableAbility__Class>(type_info, "", "CombinedUpgradeEffectiveness", "UpgradableAbility");
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
