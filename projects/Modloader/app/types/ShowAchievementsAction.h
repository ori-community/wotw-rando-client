#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowAchievementsAction {
        namespace {
            inline app::ShowAchievementsAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowAchievementsAction__Class** type_info = &type_info_ref;
        inline app::ShowAchievementsAction__Class* get_class() {
            return il2cpp::get_class<app::ShowAchievementsAction__Class>(type_info, "", "ShowAchievementsAction");
        }
        inline app::ShowAchievementsAction* create() {
            return il2cpp::create_object<app::ShowAchievementsAction>(get_class());
        }
    } // namespace ShowAchievementsAction
} // namespace app::classes::types
