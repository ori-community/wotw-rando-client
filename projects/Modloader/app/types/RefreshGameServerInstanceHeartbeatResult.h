#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RefreshGameServerInstanceHeartbeatResult {
        inline app::RefreshGameServerInstanceHeartbeatResult__Class** type_info = (app::RefreshGameServerInstanceHeartbeatResult__Class**)(modloader::win::memory::resolve_rva(0x0471F7D8));
        inline app::RefreshGameServerInstanceHeartbeatResult__Class* get_class() {
            return il2cpp::get_class<app::RefreshGameServerInstanceHeartbeatResult__Class>(type_info, "PlayFab.ServerModels", "RefreshGameServerInstanceHeartbeatResult");
        }
        inline app::RefreshGameServerInstanceHeartbeatResult* create() {
            return il2cpp::create_object<app::RefreshGameServerInstanceHeartbeatResult>(get_class());
        }
    } // namespace RefreshGameServerInstanceHeartbeatResult
} // namespace app::classes::types
