#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamAchievements {
        inline app::SteamAchievements__Class** type_info = (app::SteamAchievements__Class**)(modloader::win::memory::resolve_rva(0x04784DB8));
        inline app::SteamAchievements__Class* get_class() {
            return il2cpp::get_class<app::SteamAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "SteamAchievements");
        }
        inline app::SteamAchievements* create() {
            return il2cpp::create_object<app::SteamAchievements>(get_class());
        }
    } // namespace SteamAchievements
} // namespace app::classes::types
