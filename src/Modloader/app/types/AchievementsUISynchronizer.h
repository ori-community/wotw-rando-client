#pragma once
#include <Modloader/app/structs/AchievementsUISynchronizer.h>
#include <Modloader/app/structs/AchievementsUISynchronizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUISynchronizer {
        inline app::AchievementsUISynchronizer__Class** type_info() {
            static app::AchievementsUISynchronizer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUISynchronizer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUISynchronizer__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUISynchronizer__Class>(type_info(), "", "AchievementsUISynchronizer");
        }
        inline app::AchievementsUISynchronizer* create() {
            return il2cpp::create_object<app::AchievementsUISynchronizer>(get_class());
        }
    } // namespace AchievementsUISynchronizer
} // namespace app::classes::types
