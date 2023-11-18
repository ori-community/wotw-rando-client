#pragma once
#include <Modloader/app/structs/XboxOneAchievements_1.h>
#include <Modloader/app/structs/XboxOneAchievements_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneAchievements_1 {
        inline app::XboxOneAchievements_1__Class** type_info() {
            static app::XboxOneAchievements_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneAchievements_1__Class**)(modloader::win::memory::resolve_rva(0x04720F60));
            }
            return cache;
        }
        inline app::XboxOneAchievements_1__Class* get_class() {
            return il2cpp::get_class<app::XboxOneAchievements_1__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XboxOneAchievements");
        }
        inline app::XboxOneAchievements_1* create() {
            return il2cpp::create_object<app::XboxOneAchievements_1>(get_class());
        }
    } // namespace XboxOneAchievements_1
} // namespace app::classes::types
