#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RefreshGameServerInstanceHeartbeatRequest {
        inline app::RefreshGameServerInstanceHeartbeatRequest__Class** type_info = (app::RefreshGameServerInstanceHeartbeatRequest__Class**)(modloader::win::memory::resolve_rva(0x04702320));
        inline app::RefreshGameServerInstanceHeartbeatRequest__Class* get_class() {
            return il2cpp::get_class<app::RefreshGameServerInstanceHeartbeatRequest__Class>(type_info, "PlayFab.ServerModels", "RefreshGameServerInstanceHeartbeatRequest");
        }
        inline app::RefreshGameServerInstanceHeartbeatRequest* create() {
            return il2cpp::create_object<app::RefreshGameServerInstanceHeartbeatRequest>(get_class());
        }
    } // namespace RefreshGameServerInstanceHeartbeatRequest
} // namespace app::classes::types
