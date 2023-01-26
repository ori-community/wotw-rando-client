#pragma once
#include <Modloader/app/structs/SkillTreeLaneLogic_SkillTreeType__Enum.h>
#include <Modloader/app/structs/SkillTreeLaneLogic_SkillTreeType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic_SkillTreeType__Enum {
        inline app::SkillTreeLaneLogic_SkillTreeType__Enum__Class** type_info() {
            static app::SkillTreeLaneLogic_SkillTreeType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillTreeLaneLogic_SkillTreeType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillTreeLaneLogic_SkillTreeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeLaneLogic_SkillTreeType__Enum__Class>(type_info(), "", "SkillTreeLaneLogic", "SkillTreeType");
        }
        inline app::SkillTreeLaneLogic_SkillTreeType__Enum* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic_SkillTreeType__Enum>(get_class());
        }
    } // namespace SkillTreeLaneLogic_SkillTreeType__Enum
} // namespace app::classes::types
