#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AchievementsController__Class.h>
#include <Modloader/app/structs/AchievementsController.h>

namespace app::classes::types {
    namespace AchievementsController {
        inline app::AchievementsController__Class** type_info = (app::AchievementsController__Class**)(modloader::win::memory::resolve_rva(0x0474E7B0));
        inline app::AchievementsController__Class* get_class() {
            return il2cpp::get_class<app::AchievementsController__Class>(type_info, "", "AchievementsController");
        }
        inline app::AchievementsController* create() {
            return il2cpp::create_object<app::AchievementsController>(get_class());
        }
    } // namespace AchievementsController
} // namespace app::classes::types
