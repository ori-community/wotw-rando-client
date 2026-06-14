#pragma once
#include <Modloader/app/structs/SkillUpgradeShopUIItem.h>
#include <Modloader/app/structs/SkillUpgradeShopUIItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeShopUIItem {
        inline app::SkillUpgradeShopUIItem__Class** type_info() {
            static app::SkillUpgradeShopUIItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillUpgradeShopUIItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillUpgradeShopUIItem__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopUIItem__Class>(type_info(), "", "SkillUpgradeShopUIItem");
        }
        inline app::SkillUpgradeShopUIItem* create() {
            return il2cpp::create_object<app::SkillUpgradeShopUIItem>(get_class());
        }
    } // namespace SkillUpgradeShopUIItem
} // namespace app::classes::types
