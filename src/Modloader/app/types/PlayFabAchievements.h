#pragma once
#include <Modloader/app/structs/PlayFabAchievements.h>
#include <Modloader/app/structs/PlayFabAchievements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabAchievements {
        inline app::PlayFabAchievements__Class** type_info() {
            static app::PlayFabAchievements__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabAchievements__Class**)(modloader::win::memory::resolve_rva(0x04737F30));
            }
            return cache;
        }
        inline app::PlayFabAchievements__Class* get_class() {
            return il2cpp::get_class<app::PlayFabAchievements__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements");
        }
        inline app::PlayFabAchievements* create() {
            return il2cpp::create_object<app::PlayFabAchievements>(get_class());
        }
    } // namespace PlayFabAchievements
} // namespace app::classes::types
