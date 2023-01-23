#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementScreen__Class.h>
#include <Modloader/app/structs/AchievementScreen.h>

namespace app::classes::types {
    namespace AchievementScreen {
        namespace {
            inline app::AchievementScreen__Class* type_info_ref = nullptr;
        }
        inline app::AchievementScreen__Class** type_info = &type_info_ref;
        inline app::AchievementScreen__Class* get_class() {
            return il2cpp::get_class<app::AchievementScreen__Class>(type_info, "", "AchievementScreen");
        }
        inline app::AchievementScreen* create() {
            return il2cpp::create_object<app::AchievementScreen>(get_class());
        }
    } // namespace AchievementScreen
} // namespace app::classes::types
