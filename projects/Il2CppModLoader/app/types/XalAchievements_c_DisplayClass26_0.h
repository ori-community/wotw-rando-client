#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalAchievements_c_DisplayClass26_0 {
        inline app::XalAchievements_c_DisplayClass26_0__Class** type_info = (app::XalAchievements_c_DisplayClass26_0__Class**)(modloader::win::memory::resolve_rva(0x0470B288));
        inline app::XalAchievements_c_DisplayClass26_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalAchievements_c_DisplayClass26_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XalAchievements", "<>c__DisplayClass26_0");
        }
        inline app::XalAchievements_c_DisplayClass26_0* create() {
            return il2cpp::create_object<app::XalAchievements_c_DisplayClass26_0>(get_class());
        }
    } // namespace XalAchievements_c_DisplayClass26_0
} // namespace app::classes::types
