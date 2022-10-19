#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsUITextCounter_c_DisplayClass2_0 {
        inline app::AchievementsUITextCounter_c_DisplayClass2_0__Class** type_info = (app::AchievementsUITextCounter_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04740F20));
        inline app::AchievementsUITextCounter_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUITextCounter_c_DisplayClass2_0__Class>(type_info, "", "AchievementsUITextCounter", "<>c__DisplayClass2_0");
        }
        inline app::AchievementsUITextCounter_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::AchievementsUITextCounter_c_DisplayClass2_0>(get_class());
        }
    } // namespace AchievementsUITextCounter_c_DisplayClass2_0
} // namespace app::classes::types
