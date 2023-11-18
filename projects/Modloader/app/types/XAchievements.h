#pragma once
#include <Modloader/app/structs/XAchievements.h>
#include <Modloader/app/structs/XAchievements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XAchievements {
        inline app::XAchievements__Class** type_info() {
            static app::XAchievements__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XAchievements__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XAchievements__Class* get_class() {
            return il2cpp::get_class<app::XAchievements__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XAchievements");
        }
        inline app::XAchievements* create() {
            return il2cpp::create_object<app::XAchievements>(get_class());
        }
    } // namespace XAchievements
} // namespace app::classes::types
