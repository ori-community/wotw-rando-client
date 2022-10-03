#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AchievementMenuItem {
        namespace {
            app::AchievementMenuItem__Class* type_info_ref = nullptr;
        }
        app::AchievementMenuItem__Class** type_info = &type_info_ref;
        inline app::AchievementMenuItem__Class* get_class() {
            return il2cpp::get_class<app::AchievementMenuItem__Class>(type_info, "", "AchievementMenuItem");
        }
        inline app::AchievementMenuItem* create() {
            return il2cpp::create_object<app::AchievementMenuItem>(get_class());
        }
    } // namespace AchievementMenuItem
} // namespace app::classes::types
