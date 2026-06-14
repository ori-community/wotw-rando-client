#pragma once
#include <Modloader/app/structs/AchievementsUITextCounter.h>
#include <Modloader/app/structs/AchievementsUITextCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUITextCounter {
        inline app::AchievementsUITextCounter__Class** type_info() {
            static app::AchievementsUITextCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsUITextCounter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsUITextCounter__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUITextCounter__Class>(type_info(), "", "AchievementsUITextCounter");
        }
        inline app::AchievementsUITextCounter* create() {
            return il2cpp::create_object<app::AchievementsUITextCounter>(get_class());
        }
    } // namespace AchievementsUITextCounter
} // namespace app::classes::types
