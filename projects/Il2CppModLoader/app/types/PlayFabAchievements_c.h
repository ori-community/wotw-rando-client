#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabAchievements_c {
        inline app::PlayFabAchievements_c__Class** type_info = (app::PlayFabAchievements_c__Class**)(modloader::win::memory::resolve_rva(0x0473B3B8));
        inline app::PlayFabAchievements_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabAchievements_c__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements", "<>c");
        }
        inline app::PlayFabAchievements_c* create() {
            return il2cpp::create_object<app::PlayFabAchievements_c>(get_class());
        }
    } // namespace PlayFabAchievements_c
} // namespace app::classes::types
