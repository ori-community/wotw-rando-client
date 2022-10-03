#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabAchievements {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabAchievements__Class** type_info;
        inline app::PlayFabAchievements__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements");
        }
        inline app::PlayFabAchievements* create() {
            return il2cpp::create_object<app::PlayFabAchievements>(get_class());
        }
    } // namespace PlayFabAchievements
} // namespace app::classes::types
