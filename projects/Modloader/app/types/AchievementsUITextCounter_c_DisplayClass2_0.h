#pragma once
#include <Modloader/app/structs/AchievementsUITextCounter_c_DisplayClass2_0.h>
#include <Modloader/app/structs/AchievementsUITextCounter_c_DisplayClass2_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUITextCounter_c_DisplayClass2_0 {
        inline app::AchievementsUITextCounter_c_DisplayClass2_0__Class** type_info() {
            static app::AchievementsUITextCounter_c_DisplayClass2_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AchievementsUITextCounter_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04740F20));
            }
            return cache;
        }
        inline app::AchievementsUITextCounter_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUITextCounter_c_DisplayClass2_0__Class>(type_info(), "", "AchievementsUITextCounter", "<>c__DisplayClass2_0");
        }
        inline app::AchievementsUITextCounter_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::AchievementsUITextCounter_c_DisplayClass2_0>(get_class());
        }
    } // namespace AchievementsUITextCounter_c_DisplayClass2_0
} // namespace app::classes::types
