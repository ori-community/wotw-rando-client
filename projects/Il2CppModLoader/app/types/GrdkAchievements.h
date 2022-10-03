#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrdkAchievements {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrdkAchievements__Class** type_info;
        inline app::GrdkAchievements__Class* get_class() {
            return il2cpp::get_class<app::GrdkAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "GrdkAchievements");
        }
        inline app::GrdkAchievements* create() {
            return il2cpp::create_object<app::GrdkAchievements>(get_class());
        }
    } // namespace GrdkAchievements
} // namespace app::classes::types
