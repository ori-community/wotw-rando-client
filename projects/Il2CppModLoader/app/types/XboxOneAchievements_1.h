#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneAchievements_1 {
        inline app::XboxOneAchievements_1__Class** type_info = (app::XboxOneAchievements_1__Class**)(modloader::win::memory::resolve_rva(0x04720F60));
        inline app::XboxOneAchievements_1__Class* get_class() {
            return il2cpp::get_class<app::XboxOneAchievements_1__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XboxOneAchievements");
        }
        inline app::XboxOneAchievements_1* create() {
            return il2cpp::create_object<app::XboxOneAchievements_1>(get_class());
        }
    } // namespace XboxOneAchievements_1
} // namespace app::classes::types
