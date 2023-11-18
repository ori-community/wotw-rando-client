#pragma once
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatRequest.h>
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshGameServerInstanceHeartbeatRequest {
        inline app::RefreshGameServerInstanceHeartbeatRequest__Class** type_info() {
            static app::RefreshGameServerInstanceHeartbeatRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RefreshGameServerInstanceHeartbeatRequest__Class**)(modloader::win::memory::resolve_rva(0x04702320));
            }
            return cache;
        }
        inline app::RefreshGameServerInstanceHeartbeatRequest__Class* get_class() {
            return il2cpp::get_class<app::RefreshGameServerInstanceHeartbeatRequest__Class>(type_info(), "PlayFab.ServerModels", "RefreshGameServerInstanceHeartbeatRequest");
        }
        inline app::RefreshGameServerInstanceHeartbeatRequest* create() {
            return il2cpp::create_object<app::RefreshGameServerInstanceHeartbeatRequest>(get_class());
        }
    } // namespace RefreshGameServerInstanceHeartbeatRequest
} // namespace app::classes::types
