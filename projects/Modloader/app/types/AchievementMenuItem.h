#pragma once
#include <Modloader/app/structs/AchievementMenuItem.h>
#include <Modloader/app/structs/AchievementMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementMenuItem {
        inline app::AchievementMenuItem__Class** type_info() {
            static app::AchievementMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementMenuItem__Class* get_class() {
            return il2cpp::get_class<app::AchievementMenuItem__Class>(type_info(), "", "AchievementMenuItem");
        }
        inline app::AchievementMenuItem* create() {
            return il2cpp::create_object<app::AchievementMenuItem>(get_class());
        }
    } // namespace AchievementMenuItem
} // namespace app::classes::types
