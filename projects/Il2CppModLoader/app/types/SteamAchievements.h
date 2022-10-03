#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamAchievements {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamAchievements__Class** type_info;
        inline app::SteamAchievements__Class* get_class() {
            return il2cpp::get_class<app::SteamAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "SteamAchievements");
        }
        inline app::SteamAchievements* create() {
            return il2cpp::create_object<app::SteamAchievements>(get_class());
        }
    } // namespace SteamAchievements
} // namespace app::classes::types
