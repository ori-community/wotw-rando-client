#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness_UpgradableAbility__Array {
        namespace {
            inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class* type_info_ref = nullptr;
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class** type_info = &type_info_ref;
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class* get_class() {
            return il2cpp::get_class<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class>(type_info, "", "CombinedUpgradeEffectiveness+UpgradableAbility[]");
        }
        inline app::CombinedUpgradeEffectiveness_UpgradableAbility__Array* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness_UpgradableAbility__Array>(get_class());
        }
    } // namespace CombinedUpgradeEffectiveness_UpgradableAbility__Array
} // namespace app::classes::types
