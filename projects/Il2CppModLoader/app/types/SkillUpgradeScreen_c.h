#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkillUpgradeScreen_c__Class** type_info;
        inline app::SkillUpgradeScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillUpgradeScreen_c__Class>(type_info, "", "SkillUpgradeScreen", "<>c");
        }
        inline app::SkillUpgradeScreen_c* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen_c>(get_class());
        }
    } // namespace SkillUpgradeScreen_c
} // namespace app::classes::types
