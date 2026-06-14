#pragma once
#include <Modloader/app/structs/AchievementsUIItem__Array.h>
#include <Modloader/app/structs/AchievementsUIItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUIItem__Array {
        inline app::AchievementsUIItem__Array__Class** type_info() {
            static app::AchievementsUIItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUIItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUIItem__Array__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUIItem__Array__Class>(type_info(), "", "AchievementsUIItem[]");
        }
        inline app::AchievementsUIItem__Array* create() {
            return il2cpp::create_object<app::AchievementsUIItem__Array>(get_class());
        }
    } // namespace AchievementsUIItem__Array
} // namespace app::classes::types
