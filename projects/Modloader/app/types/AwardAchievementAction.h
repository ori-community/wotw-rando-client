#pragma once
#include <Modloader/app/structs/AwardAchievementAction.h>
#include <Modloader/app/structs/AwardAchievementAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AwardAchievementAction {
        inline app::AwardAchievementAction__Class** type_info() {
            static app::AwardAchievementAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AwardAchievementAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AwardAchievementAction__Class* get_class() {
            return il2cpp::get_class<app::AwardAchievementAction__Class>(type_info(), "", "AwardAchievementAction");
        }
        inline app::AwardAchievementAction* create() {
            return il2cpp::create_object<app::AwardAchievementAction>(get_class());
        }
    } // namespace AwardAchievementAction
} // namespace app::classes::types
