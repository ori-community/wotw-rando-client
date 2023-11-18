#pragma once
#include <Modloader/app/structs/LeaderboardsController.h>
#include <Modloader/app/structs/LeaderboardsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardsController {
        inline app::LeaderboardsController__Class** type_info() {
            static app::LeaderboardsController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeaderboardsController__Class**)(modloader::win::memory::resolve_rva(0x0476F3D0));
            }
            return cache;
        }
        inline app::LeaderboardsController__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardsController__Class>(type_info(), "", "LeaderboardsController");
        }
        inline app::LeaderboardsController* create() {
            return il2cpp::create_object<app::LeaderboardsController>(get_class());
        }
    } // namespace LeaderboardsController
} // namespace app::classes::types
