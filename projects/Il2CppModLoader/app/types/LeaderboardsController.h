#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeaderboardsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeaderboardsController__Class** type_info;
        inline app::LeaderboardsController__Class* get_class() {
            return il2cpp::get_class<app::LeaderboardsController__Class>(type_info, "", "LeaderboardsController");
        }
        inline app::LeaderboardsController* create() {
            return il2cpp::create_object<app::LeaderboardsController>(get_class());
        }
    } // namespace LeaderboardsController
} // namespace app::classes::types
