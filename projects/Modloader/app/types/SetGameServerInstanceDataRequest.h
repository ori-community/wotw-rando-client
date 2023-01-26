#pragma once
#include <Modloader/app/structs/SetGameServerInstanceDataRequest.h>
#include <Modloader/app/structs/SetGameServerInstanceDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetGameServerInstanceDataRequest {
        inline app::SetGameServerInstanceDataRequest__Class** type_info() {
            static app::SetGameServerInstanceDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetGameServerInstanceDataRequest__Class**)(modloader::win::memory::resolve_rva(0x04775CD8));
            }
            return cache;
        }
        inline app::SetGameServerInstanceDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceDataRequest__Class>(type_info(), "PlayFab.ServerModels", "SetGameServerInstanceDataRequest");
        }
        inline app::SetGameServerInstanceDataRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceDataRequest>(get_class());
        }
    } // namespace SetGameServerInstanceDataRequest
} // namespace app::classes::types
