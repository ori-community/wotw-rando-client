#pragma once
#include <Modloader/app/structs/AchievementsTestMessageProvider.h>
#include <Modloader/app/structs/AchievementsTestMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsTestMessageProvider {
        inline app::AchievementsTestMessageProvider__Class** type_info() {
            static app::AchievementsTestMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AchievementsTestMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AchievementsTestMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::AchievementsTestMessageProvider__Class>(type_info(), "", "AchievementsTestMessageProvider");
        }
        inline app::AchievementsTestMessageProvider* create() {
            return il2cpp::create_object<app::AchievementsTestMessageProvider>(get_class());
        }
    } // namespace AchievementsTestMessageProvider
} // namespace app::classes::types
