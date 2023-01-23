#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabAchievements_c_DisplayClass18_0__Class.h>
#include <Modloader/app/structs/PlayFabAchievements_c_DisplayClass18_0.h>

namespace app::classes::types {
    namespace PlayFabAchievements_c_DisplayClass18_0 {
        inline app::PlayFabAchievements_c_DisplayClass18_0__Class** type_info = (app::PlayFabAchievements_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x0477A2D8));
        inline app::PlayFabAchievements_c_DisplayClass18_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabAchievements_c_DisplayClass18_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements", "<>c__DisplayClass18_0");
        }
        inline app::PlayFabAchievements_c_DisplayClass18_0* create() {
            return il2cpp::create_object<app::PlayFabAchievements_c_DisplayClass18_0>(get_class());
        }
    } // namespace PlayFabAchievements_c_DisplayClass18_0
} // namespace app::classes::types
