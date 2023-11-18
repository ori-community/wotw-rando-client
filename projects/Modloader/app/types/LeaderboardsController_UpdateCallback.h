#pragma once
#include <Modloader/app/structs/LeaderboardsController_UpdateCallback.h>
#include <Modloader/app/structs/LeaderboardsController_UpdateCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeaderboardsController_UpdateCallback {
        inline app::LeaderboardsController_UpdateCallback__Class** type_info() {
            static app::LeaderboardsController_UpdateCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeaderboardsController_UpdateCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeaderboardsController_UpdateCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsController_UpdateCallback__Class>(type_info(), "", "LeaderboardsController", "UpdateCallback");
        }
        inline app::LeaderboardsController_UpdateCallback* create() {
            return il2cpp::create_object<app::LeaderboardsController_UpdateCallback>(get_class());
        }
    } // namespace LeaderboardsController_UpdateCallback
} // namespace app::classes::types
