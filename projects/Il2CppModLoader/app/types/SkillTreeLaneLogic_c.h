#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkillTreeLaneLogic_c__Class** type_info;
        inline app::SkillTreeLaneLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeLaneLogic_c__Class>(type_info, "", "SkillTreeLaneLogic", "<>c");
        }
        inline app::SkillTreeLaneLogic_c* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic_c>(get_class());
        }
    } // namespace SkillTreeLaneLogic_c
} // namespace app::classes::types
