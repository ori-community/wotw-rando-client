#pragma once
#include <Modloader/app/structs/SetGameServerInstanceStateRequest.h>
#include <Modloader/app/structs/SetGameServerInstanceStateRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceStateRequest {
        inline app::SetGameServerInstanceStateRequest__Class** type_info() {
            static app::SetGameServerInstanceStateRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetGameServerInstanceStateRequest__Class**)(modloader::win::memory::resolve_rva(0x04705398));
            }
            return cache;
        }
        inline app::SetGameServerInstanceStateRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceStateRequest__Class>(type_info(), "PlayFab.ServerModels", "SetGameServerInstanceStateRequest");
        }
        inline app::SetGameServerInstanceStateRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceStateRequest>(get_class());
        }
    } // namespace SetGameServerInstanceStateRequest
} // namespace app::classes::types
