#pragma once
#include <Modloader/app/structs/DeleteRemoteUserRequest.h>
#include <Modloader/app/structs/DeleteRemoteUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteRemoteUserRequest {
        inline app::DeleteRemoteUserRequest__Class** type_info() {
            static app::DeleteRemoteUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteRemoteUserRequest__Class**)(modloader::win::memory::resolve_rva(0x0470BE80));
            }
            return cache;
        }
        inline app::DeleteRemoteUserRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteRemoteUserRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "DeleteRemoteUserRequest");
        }
        inline app::DeleteRemoteUserRequest* create() {
            return il2cpp::create_object<app::DeleteRemoteUserRequest>(get_class());
        }
    } // namespace DeleteRemoteUserRequest
} // namespace app::classes::types
