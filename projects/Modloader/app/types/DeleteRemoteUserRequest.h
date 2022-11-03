#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteRemoteUserRequest {
        inline app::DeleteRemoteUserRequest__Class** type_info = (app::DeleteRemoteUserRequest__Class**)(modloader::win::memory::resolve_rva(0x0470BE80));
        inline app::DeleteRemoteUserRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteRemoteUserRequest__Class>(type_info, "PlayFab.MultiplayerModels", "DeleteRemoteUserRequest");
        }
        inline app::DeleteRemoteUserRequest* create() {
            return il2cpp::create_object<app::DeleteRemoteUserRequest>(get_class());
        }
    } // namespace DeleteRemoteUserRequest
} // namespace app::classes::types
