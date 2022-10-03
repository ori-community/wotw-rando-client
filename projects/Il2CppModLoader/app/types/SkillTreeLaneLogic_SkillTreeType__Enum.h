#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic_SkillTreeType__Enum {
        namespace {
            app::SkillTreeLaneLogic_SkillTreeType__Enum__Class* type_info_ref = nullptr;
        }
        app::SkillTreeLaneLogic_SkillTreeType__Enum__Class** type_info = &type_info_ref;
        inline app::SkillTreeLaneLogic_SkillTreeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeLaneLogic_SkillTreeType__Enum__Class>(type_info, "", "SkillTreeLaneLogic", "SkillTreeType");
        }
        inline app::SkillTreeLaneLogic_SkillTreeType__Enum* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic_SkillTreeType__Enum>(get_class());
        }
    } // namespace SkillTreeLaneLogic_SkillTreeType__Enum
} // namespace app::classes::types
