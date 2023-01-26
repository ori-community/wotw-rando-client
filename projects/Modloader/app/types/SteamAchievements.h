#pragma once
#include <Modloader/app/structs/SteamAchievements.h>
#include <Modloader/app/structs/SteamAchievements__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamAchievements {
        inline app::SteamAchievements__Class** type_info() {
            static app::SteamAchievements__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SteamAchievements__Class**)(modloader::win::memory::resolve_rva(0x04784DB8));
            }
            return cache;
        }
        inline app::SteamAchievements__Class* get_class() {
            return il2cpp::get_class<app::SteamAchievements__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "SteamAchievements");
        }
        inline app::SteamAchievements* create() {
            return il2cpp::create_object<app::SteamAchievements>(get_class());
        }
    } // namespace SteamAchievements
} // namespace app::classes::types
