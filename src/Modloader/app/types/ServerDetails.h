#pragma once
#include <Modloader/app/structs/ServerDetails.h>
#include <Modloader/app/structs/ServerDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerDetails {
        inline app::ServerDetails__Class** type_info() {
            static app::ServerDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerDetails__Class* get_class() {
            return il2cpp::get_class<app::ServerDetails__Class>(type_info(), "PlayFab.MultiplayerModels", "ServerDetails");
        }
        inline app::ServerDetails* create() {
            return il2cpp::create_object<app::ServerDetails>(get_class());
        }
    } // namespace ServerDetails
} // namespace app::classes::types
