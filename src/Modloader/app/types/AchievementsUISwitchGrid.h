#pragma once
#include <Modloader/app/structs/AchievementsUISwitchGrid.h>
#include <Modloader/app/structs/AchievementsUISwitchGrid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUISwitchGrid {
        inline app::AchievementsUISwitchGrid__Class** type_info() {
            static app::AchievementsUISwitchGrid__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUISwitchGrid__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUISwitchGrid__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUISwitchGrid__Class>(type_info(), "", "AchievementsUISwitchGrid");
        }
        inline app::AchievementsUISwitchGrid* create() {
            return il2cpp::create_object<app::AchievementsUISwitchGrid>(get_class());
        }
    } // namespace AchievementsUISwitchGrid
} // namespace app::classes::types
