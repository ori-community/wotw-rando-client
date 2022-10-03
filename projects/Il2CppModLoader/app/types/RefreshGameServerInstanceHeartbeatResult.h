#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshGameServerInstanceHeartbeatResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RefreshGameServerInstanceHeartbeatResult__Class** type_info;
        inline app::RefreshGameServerInstanceHeartbeatResult__Class* get_class() {
            return il2cpp::get_class<app::RefreshGameServerInstanceHeartbeatResult__Class>(type_info, "PlayFab.ServerModels", "RefreshGameServerInstanceHeartbeatResult");
        }
        inline app::RefreshGameServerInstanceHeartbeatResult* create() {
            return il2cpp::create_object<app::RefreshGameServerInstanceHeartbeatResult>(get_class());
        }
    } // namespace RefreshGameServerInstanceHeartbeatResult
} // namespace app::classes::types
