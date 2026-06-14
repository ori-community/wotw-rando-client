#pragma once
#include <Modloader/app/structs/SkillUpgradeShopPurchaseResultCondition.h>
#include <Modloader/app/structs/SkillUpgradeShopPurchaseResultCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeShopPurchaseResultCondition {
        inline app::SkillUpgradeShopPurchaseResultCondition__Class** type_info() {
            static app::SkillUpgradeShopPurchaseResultCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillUpgradeShopPurchaseResultCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillUpgradeShopPurchaseResultCondition__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopPurchaseResultCondition__Class>(type_info(), "experiments.npcs.weaponMaster.scripts", "SkillUpgradeShopPurchaseResultCondition");
        }
        inline app::SkillUpgradeShopPurchaseResultCondition* create() {
            return il2cpp::create_object<app::SkillUpgradeShopPurchaseResultCondition>(get_class());
        }
    } // namespace SkillUpgradeShopPurchaseResultCondition
} // namespace app::classes::types
