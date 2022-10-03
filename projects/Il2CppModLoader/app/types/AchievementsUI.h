#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AchievementsUI__Class** type_info;
        inline app::AchievementsUI__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUI__Class>(type_info, "", "AchievementsUI");
        }
        inline app::AchievementsUI* create() {
            return il2cpp::create_object<app::AchievementsUI>(get_class());
        }
    } // namespace AchievementsUI
} // namespace app::classes::types
