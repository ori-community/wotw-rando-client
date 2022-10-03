#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementScreen {
        namespace {
            app::AchievementScreen__Class* type_info_ref = nullptr;
        }
        app::AchievementScreen__Class** type_info = &type_info_ref;
        inline app::AchievementScreen__Class* get_class() {
            return il2cpp::get_class<app::AchievementScreen__Class>(type_info, "", "AchievementScreen");
        }
        inline app::AchievementScreen* create() {
            return il2cpp::create_object<app::AchievementScreen>(get_class());
        }
    } // namespace AchievementScreen
} // namespace app::classes::types
