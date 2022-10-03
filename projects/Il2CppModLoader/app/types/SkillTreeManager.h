#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkillTreeManager__Class** type_info;
        inline app::SkillTreeManager__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeManager__Class>(type_info, "", "SkillTreeManager");
        }
        inline app::SkillTreeManager* create() {
            return il2cpp::create_object<app::SkillTreeManager>(get_class());
        }
    } // namespace SkillTreeManager
} // namespace app::classes::types
