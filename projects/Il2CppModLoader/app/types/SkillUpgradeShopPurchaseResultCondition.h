#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeShopPurchaseResultCondition {
        namespace {
            app::SkillUpgradeShopPurchaseResultCondition__Class* type_info_ref = nullptr;
        }
        app::SkillUpgradeShopPurchaseResultCondition__Class** type_info = &type_info_ref;
        inline app::SkillUpgradeShopPurchaseResultCondition__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopPurchaseResultCondition__Class>(type_info, "experiments.npcs.weaponMaster.scripts", "SkillUpgradeShopPurchaseResultCondition");
        }
        inline app::SkillUpgradeShopPurchaseResultCondition* create() {
            return il2cpp::create_object<app::SkillUpgradeShopPurchaseResultCondition>(get_class());
        }
    } // namespace SkillUpgradeShopPurchaseResultCondition
} // namespace app::classes::types
