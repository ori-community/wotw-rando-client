#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkillUpgradeScreen__Class** type_info;
        inline app::SkillUpgradeScreen__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeScreen__Class>(type_info, "", "SkillUpgradeScreen");
        }
        inline app::SkillUpgradeScreen* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen>(get_class());
        }
    } // namespace SkillUpgradeScreen
} // namespace app::classes::types
