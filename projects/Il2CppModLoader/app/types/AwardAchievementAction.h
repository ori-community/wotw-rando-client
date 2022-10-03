#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AwardAchievementAction {
        namespace {
            app::AwardAchievementAction__Class* type_info_ref = nullptr;
        }
        app::AwardAchievementAction__Class** type_info = &type_info_ref;
        inline app::AwardAchievementAction__Class* get_class() {
            return il2cpp::get_class<app::AwardAchievementAction__Class>(type_info, "", "AwardAchievementAction");
        }
        inline app::AwardAchievementAction* create() {
            return il2cpp::create_object<app::AwardAchievementAction>(get_class());
        }
    } // namespace AwardAchievementAction
} // namespace app::classes::types
