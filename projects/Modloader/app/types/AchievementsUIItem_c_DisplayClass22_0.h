#pragma once
#include <Modloader/app/structs/AchievementsUIItem_c_DisplayClass22_0.h>
#include <Modloader/app/structs/AchievementsUIItem_c_DisplayClass22_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUIItem_c_DisplayClass22_0 {
        inline app::AchievementsUIItem_c_DisplayClass22_0__Class** type_info() {
            static app::AchievementsUIItem_c_DisplayClass22_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AchievementsUIItem_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x0477C160));
            }
            return cache;
        }
        inline app::AchievementsUIItem_c_DisplayClass22_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsUIItem_c_DisplayClass22_0__Class>(type_info(), "", "AchievementsUIItem", "<>c__DisplayClass22_0");
        }
        inline app::AchievementsUIItem_c_DisplayClass22_0* create() {
            return il2cpp::create_object<app::AchievementsUIItem_c_DisplayClass22_0>(get_class());
        }
    } // namespace AchievementsUIItem_c_DisplayClass22_0
} // namespace app::classes::types
