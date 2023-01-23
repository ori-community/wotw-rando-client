#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalAchievements_c_DisplayClass21_0__Class.h>
#include <Modloader/app/structs/XalAchievements_c_DisplayClass21_0.h>

namespace app::classes::types {
    namespace XalAchievements_c_DisplayClass21_0 {
        inline app::XalAchievements_c_DisplayClass21_0__Class** type_info = (app::XalAchievements_c_DisplayClass21_0__Class**)(modloader::win::memory::resolve_rva(0x04715828));
        inline app::XalAchievements_c_DisplayClass21_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalAchievements_c_DisplayClass21_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "XalAchievements", "<>c__DisplayClass21_0");
        }
        inline app::XalAchievements_c_DisplayClass21_0* create() {
            return il2cpp::create_object<app::XalAchievements_c_DisplayClass21_0>(get_class());
        }
    } // namespace XalAchievements_c_DisplayClass21_0
} // namespace app::classes::types
