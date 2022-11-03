#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillUpgradeShopUISubItem {
        namespace {
            inline app::SkillUpgradeShopUISubItem__Class* type_info_ref = nullptr;
        }
        inline app::SkillUpgradeShopUISubItem__Class** type_info = &type_info_ref;
        inline app::SkillUpgradeShopUISubItem__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeShopUISubItem__Class>(type_info, "", "SkillUpgradeShopUISubItem");
        }
        inline app::SkillUpgradeShopUISubItem* create() {
            return il2cpp::create_object<app::SkillUpgradeShopUISubItem>(get_class());
        }
    } // namespace SkillUpgradeShopUISubItem
} // namespace app::classes::types
