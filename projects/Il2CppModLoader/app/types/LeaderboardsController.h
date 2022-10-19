#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeaderboardsController {
        inline app::LeaderboardsController__Class** type_info = (app::LeaderboardsController__Class**)(modloader::win::memory::resolve_rva(0x0476F3D0));
        inline app::LeaderboardsController__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardsController__Class>(type_info, "", "LeaderboardsController");
        }
        inline app::LeaderboardsController* create() {
            return il2cpp::create_object<app::LeaderboardsController>(get_class());
        }
    } // namespace LeaderboardsController
} // namespace app::classes::types
