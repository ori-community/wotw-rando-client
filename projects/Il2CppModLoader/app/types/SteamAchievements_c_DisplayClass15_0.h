#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamAchievements_c_DisplayClass15_0 {
        inline app::SteamAchievements_c_DisplayClass15_0__Class** type_info = (app::SteamAchievements_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x0473E1E8));
        inline app::SteamAchievements_c_DisplayClass15_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamAchievements_c_DisplayClass15_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "SteamAchievements", "<>c__DisplayClass15_0");
        }
        inline app::SteamAchievements_c_DisplayClass15_0* create() {
            return il2cpp::create_object<app::SteamAchievements_c_DisplayClass15_0>(get_class());
        }
    } // namespace SteamAchievements_c_DisplayClass15_0
} // namespace app::classes::types
