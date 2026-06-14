#pragma once
#include <Modloader/app/structs/SkillUpgradeScreen_HintsSettings.h>
#include <Modloader/app/structs/SkillUpgradeScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/SkillUpgradeScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen_HintsSettings {
        inline app::SkillUpgradeScreen_HintsSettings__Class** type_info() {
            static app::SkillUpgradeScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillUpgradeScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillUpgradeScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillUpgradeScreen_HintsSettings__Class>(type_info(), "", "SkillUpgradeScreen", "HintsSettings");
        }
        inline app::SkillUpgradeScreen_HintsSettings* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen_HintsSettings>(get_class());
        }
        inline app::SkillUpgradeScreen_HintsSettings__Boxed* box(app::SkillUpgradeScreen_HintsSettings value) {
            return il2cpp::box_value<app::SkillUpgradeScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace SkillUpgradeScreen_HintsSettings
} // namespace app::classes::types
