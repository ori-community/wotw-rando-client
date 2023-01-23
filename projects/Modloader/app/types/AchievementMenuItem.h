#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementMenuItem__Class.h>
#include <Modloader/app/structs/AchievementMenuItem.h>

namespace app::classes::types {
    namespace AchievementMenuItem {
        namespace {
            inline app::AchievementMenuItem__Class* type_info_ref = nullptr;
        }
        inline app::AchievementMenuItem__Class** type_info = &type_info_ref;
        inline app::AchievementMenuItem__Class* get_class() {
            return il2cpp::get_class<app::AchievementMenuItem__Class>(type_info, "", "AchievementMenuItem");
        }
        inline app::AchievementMenuItem* create() {
            return il2cpp::create_object<app::AchievementMenuItem>(get_class());
        }
    } // namespace AchievementMenuItem
} // namespace app::classes::types
