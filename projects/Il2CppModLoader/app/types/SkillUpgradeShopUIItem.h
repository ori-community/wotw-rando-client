#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeShopUIItem {
        namespace {
            app::SkillUpgradeShopUIItem__Class* type_info_ref = nullptr;
        }
        app::SkillUpgradeShopUIItem__Class** type_info = &type_info_ref;
        inline app::SkillUpgradeShopUIItem__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopUIItem__Class>(type_info, "", "SkillUpgradeShopUIItem");
        }
        inline app::SkillUpgradeShopUIItem* create() {
            return il2cpp::create_object<app::SkillUpgradeShopUIItem>(get_class());
        }
    } // namespace SkillUpgradeShopUIItem
} // namespace app::classes::types
