#pragma once
#include <Modloader/app/structs/RequestMultiplayerServerResponse.h>
#include <Modloader/app/structs/RequestMultiplayerServerResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequestMultiplayerServerResponse {
        inline app::RequestMultiplayerServerResponse__Class** type_info() {
            static app::RequestMultiplayerServerResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequestMultiplayerServerResponse__Class**)(modloader::win::memory::resolve_rva(0x04725FF0));
            }
            return cache;
        }
        inline app::RequestMultiplayerServerResponse__Class* get_class() {
            return il2cpp::get_class<app::RequestMultiplayerServerResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "RequestMultiplayerServerResponse");
        }
        inline app::RequestMultiplayerServerResponse* create() {
            return il2cpp::create_object<app::RequestMultiplayerServerResponse>(get_class());
        }
    } // namespace RequestMultiplayerServerResponse
} // namespace app::classes::types
