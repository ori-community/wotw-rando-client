#pragma once
#include <Modloader/app/structs/AchievementsController_c_DisplayClass19_0.h>
#include <Modloader/app/structs/AchievementsController_c_DisplayClass19_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsController_c_DisplayClass19_0 {
        inline app::AchievementsController_c_DisplayClass19_0__Class** type_info() {
            static app::AchievementsController_c_DisplayClass19_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AchievementsController_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x047575E8));
            }
            return cache;
        }
        inline app::AchievementsController_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::AchievementsController_c_DisplayClass19_0__Class>(type_info(), "", "AchievementsController", "<>c__DisplayClass19_0");
        }
        inline app::AchievementsController_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::AchievementsController_c_DisplayClass19_0>(get_class());
        }
    } // namespace AchievementsController_c_DisplayClass19_0
} // namespace app::classes::types
