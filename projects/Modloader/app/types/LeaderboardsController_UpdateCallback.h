#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeaderboardsController_UpdateCallback__Class.h>
#include <Modloader/app/structs/LeaderboardsController_UpdateCallback.h>

namespace app::classes::types {
    namespace LeaderboardsController_UpdateCallback {
        namespace {
            inline app::LeaderboardsController_UpdateCallback__Class* type_info_ref = nullptr;
        }
        inline app::LeaderboardsController_UpdateCallback__Class** type_info = &type_info_ref;
        inline app::LeaderboardsController_UpdateCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::LeaderboardsController_UpdateCallback__Class>(type_info, "", "LeaderboardsController", "UpdateCallback");
        }
        inline app::LeaderboardsController_UpdateCallback* create() {
            return il2cpp::create_object<app::LeaderboardsController_UpdateCallback>(get_class());
        }
    } // namespace LeaderboardsController_UpdateCallback
} // namespace app::classes::types
