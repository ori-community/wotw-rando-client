#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkillUpgradeShopUIItem__Class.h>
#include <Modloader/app/structs/SkillUpgradeShopUIItem.h>

namespace app::classes::types {
    namespace SkillUpgradeShopUIItem {
        namespace {
            inline app::SkillUpgradeShopUIItem__Class* type_info_ref = nullptr;
        }
        inline app::SkillUpgradeShopUIItem__Class** type_info = &type_info_ref;
        inline app::SkillUpgradeShopUIItem__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopUIItem__Class>(type_info, "", "SkillUpgradeShopUIItem");
        }
        inline app::SkillUpgradeShopUIItem* create() {
            return il2cpp::create_object<app::SkillUpgradeShopUIItem>(get_class());
        }
    } // namespace SkillUpgradeShopUIItem
} // namespace app::classes::types
