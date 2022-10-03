#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshGameServerInstanceHeartbeatRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RefreshGameServerInstanceHeartbeatRequest__Class** type_info;
        inline app::RefreshGameServerInstanceHeartbeatRequest__Class* get_class() {
            return il2cpp::get_class<app::RefreshGameServerInstanceHeartbeatRequest__Class>(type_info, "PlayFab.ServerModels", "RefreshGameServerInstanceHeartbeatRequest");
        }
        inline app::RefreshGameServerInstanceHeartbeatRequest* create() {
            return il2cpp::create_object<app::RefreshGameServerInstanceHeartbeatRequest>(get_class());
        }
    } // namespace RefreshGameServerInstanceHeartbeatRequest
} // namespace app::classes::types
