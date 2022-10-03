#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasPurchasedSkillUpgradeCondition {
        namespace {
            app::HasPurchasedSkillUpgradeCondition__Class* type_info_ref = nullptr;
        }
        app::HasPurchasedSkillUpgradeCondition__Class** type_info = &type_info_ref;
        inline app::HasPurchasedSkillUpgradeCondition__Class* get_class() {
            return il2cpp::get_class<app::HasPurchasedSkillUpgradeCondition__Class>(type_info, "experiments.npcs.weaponMaster.scripts", "HasPurchasedSkillUpgradeCondition");
        }
        inline app::HasPurchasedSkillUpgradeCondition* create() {
            return il2cpp::create_object<app::HasPurchasedSkillUpgradeCondition>(get_class());
        }
    } // namespace HasPurchasedSkillUpgradeCondition
} // namespace app::classes::types
