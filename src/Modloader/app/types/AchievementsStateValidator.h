#pragma once
#include <Modloader/app/structs/AchievementsStateValidator.h>
#include <Modloader/app/structs/AchievementsStateValidator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsStateValidator {
        inline app::AchievementsStateValidator__Class** type_info() {
            static app::AchievementsStateValidator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsStateValidator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsStateValidator__Class* get_class() {
            return il2cpp::get_class<app::AchievementsStateValidator__Class>(type_info(), "", "AchievementsStateValidator");
        }
        inline app::AchievementsStateValidator* create() {
            return il2cpp::create_object<app::AchievementsStateValidator>(get_class());
        }
    } // namespace AchievementsStateValidator
} // namespace app::classes::types
