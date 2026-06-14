#pragma once
#include <Modloader/app/structs/ShowAchievementsAction.h>
#include <Modloader/app/structs/ShowAchievementsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowAchievementsAction {
        inline app::ShowAchievementsAction__Class** type_info() {
            static app::ShowAchievementsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowAchievementsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowAchievementsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowAchievementsAction__Class>(type_info(), "", "ShowAchievementsAction");
        }
        inline app::ShowAchievementsAction* create() {
            return il2cpp::create_object<app::ShowAchievementsAction>(get_class());
        }
    } // namespace ShowAchievementsAction
} // namespace app::classes::types
