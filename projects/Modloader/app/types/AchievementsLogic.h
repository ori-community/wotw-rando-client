#pragma once
#include <Modloader/app/structs/AchievementsLogic.h>
#include <Modloader/app/structs/AchievementsLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AchievementsLogic {
        inline app::AchievementsLogic__Class** type_info() {
            static app::AchievementsLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AchievementsLogic__Class**)(modloader::win::memory::resolve_rva(0x04788E90));
            }
            return cache;
        }
        inline app::AchievementsLogic__Class* get_class() {
            return il2cpp::get_class<app::AchievementsLogic__Class>(type_info(), "", "AchievementsLogic");
        }
        inline app::AchievementsLogic* create() {
            return il2cpp::create_object<app::AchievementsLogic>(get_class());
        }
    } // namespace AchievementsLogic
} // namespace app::classes::types
