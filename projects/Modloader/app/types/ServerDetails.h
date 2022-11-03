#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerDetails {
        namespace {
            inline app::ServerDetails__Class* type_info_ref = nullptr;
        }
        inline app::ServerDetails__Class** type_info = &type_info_ref;
        inline app::ServerDetails__Class* get_class() {
            return il2cpp::get_class<app::ServerDetails__Class>(type_info, "PlayFab.MultiplayerModels", "ServerDetails");
        }
        inline app::ServerDetails* create() {
            return il2cpp::create_object<app::ServerDetails>(get_class());
        }
    } // namespace ServerDetails
} // namespace app::classes::types
