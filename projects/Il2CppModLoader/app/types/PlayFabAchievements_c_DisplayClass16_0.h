#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabAchievements_c_DisplayClass16_0 {
        inline app::PlayFabAchievements_c_DisplayClass16_0__Class** type_info = (app::PlayFabAchievements_c_DisplayClass16_0__Class**)(modloader::win::memory::resolve_rva(0x0477A5E8));
        inline app::PlayFabAchievements_c_DisplayClass16_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabAchievements_c_DisplayClass16_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements", "<>c__DisplayClass16_0");
        }
        inline app::PlayFabAchievements_c_DisplayClass16_0* create() {
            return il2cpp::create_object<app::PlayFabAchievements_c_DisplayClass16_0>(get_class());
        }
    } // namespace PlayFabAchievements_c_DisplayClass16_0
} // namespace app::classes::types
