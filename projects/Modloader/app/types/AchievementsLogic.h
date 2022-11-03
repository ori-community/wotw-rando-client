#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AchievementsLogic {
        inline app::AchievementsLogic__Class** type_info = (app::AchievementsLogic__Class**)(modloader::win::memory::resolve_rva(0x04788E90));
        inline app::AchievementsLogic__Class* get_class() {
            return il2cpp::get_class<app::AchievementsLogic__Class>(type_info, "", "AchievementsLogic");
        }
        inline app::AchievementsLogic* create() {
            return il2cpp::create_object<app::AchievementsLogic>(get_class());
        }
    } // namespace AchievementsLogic
} // namespace app::classes::types
