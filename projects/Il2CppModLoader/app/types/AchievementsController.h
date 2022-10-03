#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AchievementsController__Class** type_info;
        inline app::AchievementsController__Class* get_class() {
            return il2cpp::get_class<app::AchievementsController__Class>(type_info, "", "AchievementsController");
        }
        inline app::AchievementsController* create() {
            return il2cpp::create_object<app::AchievementsController>(get_class());
        }
    } // namespace AchievementsController
} // namespace app::classes::types
