#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AwardAchievementAction__Class.h>
#include <Modloader/app/structs/AwardAchievementAction.h>

namespace app::classes::types {
    namespace AwardAchievementAction {
        namespace {
            inline app::AwardAchievementAction__Class* type_info_ref = nullptr;
        }
        inline app::AwardAchievementAction__Class** type_info = &type_info_ref;
        inline app::AwardAchievementAction__Class* get_class() {
            return il2cpp::get_class<app::AwardAchievementAction__Class>(type_info, "", "AwardAchievementAction");
        }
        inline app::AwardAchievementAction* create() {
            return il2cpp::create_object<app::AwardAchievementAction>(get_class());
        }
    } // namespace AwardAchievementAction
} // namespace app::classes::types
