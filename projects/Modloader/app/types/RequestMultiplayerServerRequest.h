#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestMultiplayerServerRequest {
        inline app::RequestMultiplayerServerRequest__Class** type_info = (app::RequestMultiplayerServerRequest__Class**)(modloader::win::memory::resolve_rva(0x04755EF0));
        inline app::RequestMultiplayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::RequestMultiplayerServerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "RequestMultiplayerServerRequest");
        }
        inline app::RequestMultiplayerServerRequest* create() {
            return il2cpp::create_object<app::RequestMultiplayerServerRequest>(get_class());
        }
    } // namespace RequestMultiplayerServerRequest
} // namespace app::classes::types
