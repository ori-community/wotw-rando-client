#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalAchievements {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalAchievements__Class** type_info;
        inline app::XalAchievements__Class* get_class() {
            return il2cpp::get_class<app::XalAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XalAchievements");
        }
        inline app::XalAchievements* create() {
            return il2cpp::create_object<app::XalAchievements>(get_class());
        }
    } // namespace XalAchievements
} // namespace app::classes::types
