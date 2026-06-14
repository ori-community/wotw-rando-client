#pragma once
#include <Modloader/app/structs/SkillUpgradeShopUISubItem.h>
#include <Modloader/app/structs/SkillUpgradeShopUISubItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeShopUISubItem {
        inline app::SkillUpgradeShopUISubItem__Class** type_info() {
            static app::SkillUpgradeShopUISubItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillUpgradeShopUISubItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillUpgradeShopUISubItem__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopUISubItem__Class>(type_info(), "", "SkillUpgradeShopUISubItem");
        }
        inline app::SkillUpgradeShopUISubItem* create() {
            return il2cpp::create_object<app::SkillUpgradeShopUISubItem>(get_class());
        }
    } // namespace SkillUpgradeShopUISubItem
} // namespace app::classes::types
