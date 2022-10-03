#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkillTreeLaneLogic__Class** type_info;
        inline app::SkillTreeLaneLogic__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeLaneLogic__Class>(type_info, "", "SkillTreeLaneLogic");
        }
        inline app::SkillTreeLaneLogic* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic>(get_class());
        }
    } // namespace SkillTreeLaneLogic
} // namespace app::classes::types
