#pragma once
#include <Modloader/app/structs/AchievementScreen.h>
#include <Modloader/app/structs/AchievementScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementScreen {
        inline app::AchievementScreen__Class** type_info() {
            static app::AchievementScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementScreen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementScreen__Class* get_class() {
            return il2cpp::get_class<app::AchievementScreen__Class>(type_info(), "", "AchievementScreen");
        }
        inline app::AchievementScreen* create() {
            return il2cpp::create_object<app::AchievementScreen>(get_class());
        }
    } // namespace AchievementScreen
} // namespace app::classes::types
