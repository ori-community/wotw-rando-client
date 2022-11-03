#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetGameServerInstanceDataRequest {
        inline app::SetGameServerInstanceDataRequest__Class** type_info = (app::SetGameServerInstanceDataRequest__Class**)(modloader::win::memory::resolve_rva(0x04775CD8));
        inline app::SetGameServerInstanceDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetGameServerInstanceDataRequest__Class>(type_info, "PlayFab.ServerModels", "SetGameServerInstanceDataRequest");
        }
        inline app::SetGameServerInstanceDataRequest* create() {
            return il2cpp::create_object<app::SetGameServerInstanceDataRequest>(get_class());
        }
    } // namespace SetGameServerInstanceDataRequest
} // namespace app::classes::types
