#pragma once
#include <Modloader/app/structs/RequestMultiplayerServerRequest.h>
#include <Modloader/app/structs/RequestMultiplayerServerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestMultiplayerServerRequest {
        inline app::RequestMultiplayerServerRequest__Class** type_info() {
            static app::RequestMultiplayerServerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestMultiplayerServerRequest__Class**)(modloader::win::memory::resolve_rva(0x04755EF0));
            }
            return cache;
        }
        inline app::RequestMultiplayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::RequestMultiplayerServerRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "RequestMultiplayerServerRequest");
        }
        inline app::RequestMultiplayerServerRequest* create() {
            return il2cpp::create_object<app::RequestMultiplayerServerRequest>(get_class());
        }
    } // namespace RequestMultiplayerServerRequest
} // namespace app::classes::types
