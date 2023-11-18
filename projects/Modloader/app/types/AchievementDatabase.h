#pragma once
#include <Modloader/app/structs/AchievementDatabase.h>
#include <Modloader/app/structs/AchievementDatabase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementDatabase {
        inline app::AchievementDatabase__Class** type_info() {
            static app::AchievementDatabase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementDatabase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementDatabase__Class* get_class() {
            return il2cpp::get_class<app::AchievementDatabase__Class>(type_info(), "", "AchievementDatabase");
        }
        inline app::AchievementDatabase* create() {
            return il2cpp::create_object<app::AchievementDatabase>(get_class());
        }
    } // namespace AchievementDatabase
} // namespace app::classes::types
