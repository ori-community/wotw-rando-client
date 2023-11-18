#pragma once
#include <Modloader/app/structs/SkillUpgradeUIUpgradeDetails.h>
#include <Modloader/app/structs/SkillUpgradeUIUpgradeDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeUIUpgradeDetails {
        inline app::SkillUpgradeUIUpgradeDetails__Class** type_info() {
            static app::SkillUpgradeUIUpgradeDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillUpgradeUIUpgradeDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillUpgradeUIUpgradeDetails__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeUIUpgradeDetails__Class>(type_info(), "", "SkillUpgradeUIUpgradeDetails");
        }
        inline app::SkillUpgradeUIUpgradeDetails* create() {
            return il2cpp::create_object<app::SkillUpgradeUIUpgradeDetails>(get_class());
        }
    } // namespace SkillUpgradeUIUpgradeDetails
} // namespace app::classes::types
