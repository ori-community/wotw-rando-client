#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabAchievements {
        inline app::PlayFabAchievements__Class** type_info = (app::PlayFabAchievements__Class**)(modloader::win::memory::resolve_rva(0x04737F30));
        inline app::PlayFabAchievements__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAchievements__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements");
        }
        inline app::PlayFabAchievements* create() {
            return il2cpp::create_object<app::PlayFabAchievements>(get_class());
        }
    } // namespace PlayFabAchievements
} // namespace app::classes::types
