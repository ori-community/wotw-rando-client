#pragma once
#include <Modloader/app/structs/SkillTreeInfoPanelTextLayout.h>
#include <Modloader/app/structs/SkillTreeInfoPanelTextLayout__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeInfoPanelTextLayout {
        inline app::SkillTreeInfoPanelTextLayout__Class** type_info() {
            static app::SkillTreeInfoPanelTextLayout__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillTreeInfoPanelTextLayout__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillTreeInfoPanelTextLayout__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeInfoPanelTextLayout__Class>(type_info(), "", "SkillTreeInfoPanelTextLayout");
        }
        inline app::SkillTreeInfoPanelTextLayout* create() {
            return il2cpp::create_object<app::SkillTreeInfoPanelTextLayout>(get_class());
        }
    } // namespace SkillTreeInfoPanelTextLayout
} // namespace app::classes::types
