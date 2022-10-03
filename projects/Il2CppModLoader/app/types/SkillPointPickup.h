#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillPointPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SkillPointPickup__Class** type_info;
        inline app::SkillPointPickup__Class* get_class() {
            return il2cpp::get_class<app::SkillPointPickup__Class>(type_info, "", "SkillPointPickup");
        }
        inline app::SkillPointPickup* create() {
            return il2cpp::create_object<app::SkillPointPickup>(get_class());
        }
    } // namespace SkillPointPickup
} // namespace app::classes::types
