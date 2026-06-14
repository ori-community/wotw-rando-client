#pragma once
#include <Modloader/app/structs/HasPurchasedSkillUpgradeCondition.h>
#include <Modloader/app/structs/HasPurchasedSkillUpgradeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedSkillUpgradeCondition {
        inline app::HasPurchasedSkillUpgradeCondition__Class** type_info() {
            static app::HasPurchasedSkillUpgradeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasPurchasedSkillUpgradeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasPurchasedSkillUpgradeCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedSkillUpgradeCondition__Class>(type_info(), "experiments.npcs.weaponMaster.scripts", "HasPurchasedSkillUpgradeCondition");
        }
        inline app::HasPurchasedSkillUpgradeCondition* create() {
            return il2cpp::create_object<app::HasPurchasedSkillUpgradeCondition>(get_class());
        }
    } // namespace HasPurchasedSkillUpgradeCondition
} // namespace app::classes::types
