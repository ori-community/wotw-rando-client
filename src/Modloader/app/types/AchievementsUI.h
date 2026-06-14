#pragma once
#include <Modloader/app/structs/AchievementsUI.h>
#include <Modloader/app/structs/AchievementsUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsUI {
        inline app::AchievementsUI__Class** type_info() {
            static app::AchievementsUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AchievementsUI__Class**)(modloader::win::memory::resolve_rva(0x04704B58));
            }
            return cache;
        }
        inline app::AchievementsUI__Class* get_class() {
            return il2cpp::get_class<app::AchievementsUI__Class>(type_info(), "", "AchievementsUI");
        }
        inline app::AchievementsUI* create() {
            return il2cpp::create_object<app::AchievementsUI>(get_class());
        }
    } // namespace AchievementsUI
} // namespace app::classes::types
