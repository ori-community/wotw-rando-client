#pragma once
#include <Modloader/app/structs/PlayFabAchievements_c_DisplayClass18_1.h>
#include <Modloader/app/structs/PlayFabAchievements_c_DisplayClass18_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabAchievements_c_DisplayClass18_1 {
        inline app::PlayFabAchievements_c_DisplayClass18_1__Class** type_info() {
            static app::PlayFabAchievements_c_DisplayClass18_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabAchievements_c_DisplayClass18_1__Class**)(modloader::win::memory::resolve_rva(0x0471C8C8));
            }
            return cache;
        }
        inline app::PlayFabAchievements_c_DisplayClass18_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabAchievements_c_DisplayClass18_1__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "PlayFabAchievements", "<>c__DisplayClass18_1");
        }
        inline app::PlayFabAchievements_c_DisplayClass18_1* create() {
            return il2cpp::create_object<app::PlayFabAchievements_c_DisplayClass18_1>(get_class());
        }
    } // namespace PlayFabAchievements_c_DisplayClass18_1
} // namespace app::classes::types
