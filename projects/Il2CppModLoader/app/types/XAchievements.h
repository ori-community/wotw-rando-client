#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XAchievements {
        namespace {
            app::XAchievements__Class* type_info_ref = nullptr;
        }
        app::XAchievements__Class** type_info = &type_info_ref;
        inline app::XAchievements__Class* get_class() {
            return il2cpp::get_class<app::XAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XAchievements");
        }
        inline app::XAchievements* create() {
            return il2cpp::create_object<app::XAchievements>(get_class());
        }
    } // namespace XAchievements
} // namespace app::classes::types
