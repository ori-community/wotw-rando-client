#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementsUISynchronizer {
        namespace {
            app::AchievementsUISynchronizer__Class* type_info_ref = nullptr;
        }
        app::AchievementsUISynchronizer__Class** type_info = &type_info_ref;
        inline app::AchievementsUISynchronizer__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUISynchronizer__Class>(type_info, "", "AchievementsUISynchronizer");
        }
        inline app::AchievementsUISynchronizer* create() {
            return il2cpp::create_object<app::AchievementsUISynchronizer>(get_class());
        }
    } // namespace AchievementsUISynchronizer
} // namespace app::classes::types
