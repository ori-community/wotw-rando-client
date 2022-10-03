#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AchievementsLogic__Class** type_info;
        inline app::AchievementsLogic__Class* get_class() {
            return il2cpp::get_class<app::AchievementsLogic__Class>(type_info, "", "AchievementsLogic");
        }
        inline app::AchievementsLogic* create() {
            return il2cpp::create_object<app::AchievementsLogic>(get_class());
        }
    } // namespace AchievementsLogic
} // namespace app::classes::types
