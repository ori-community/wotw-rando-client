#pragma once
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatResult.h>
#include <Modloader/app/structs/RefreshGameServerInstanceHeartbeatResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RefreshGameServerInstanceHeartbeatResult {
        inline app::RefreshGameServerInstanceHeartbeatResult__Class** type_info() {
            static app::RefreshGameServerInstanceHeartbeatResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RefreshGameServerInstanceHeartbeatResult__Class**)(modloader::win::memory::resolve_rva(0x0471F7D8));
            }
            return cache;
        }
        inline app::RefreshGameServerInstanceHeartbeatResult__Class* get_class() {
            return il2cpp::get_class<app::RefreshGameServerInstanceHeartbeatResult__Class>(type_info(), "PlayFab.ServerModels", "RefreshGameServerInstanceHeartbeatResult");
        }
        inline app::RefreshGameServerInstanceHeartbeatResult* create() {
            return il2cpp::create_object<app::RefreshGameServerInstanceHeartbeatResult>(get_class());
        }
    } // namespace RefreshGameServerInstanceHeartbeatResult
} // namespace app::classes::types
