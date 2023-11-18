#pragma once
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest.h>
#include <Modloader/app/structs/ShutdownMultiplayerServerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShutdownMultiplayerServerRequest {
        inline app::ShutdownMultiplayerServerRequest__Class** type_info() {
            static app::ShutdownMultiplayerServerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShutdownMultiplayerServerRequest__Class**)(modloader::win::memory::resolve_rva(0x0471A010));
            }
            return cache;
        }
        inline app::ShutdownMultiplayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ShutdownMultiplayerServerRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "ShutdownMultiplayerServerRequest");
        }
        inline app::ShutdownMultiplayerServerRequest* create() {
            return il2cpp::create_object<app::ShutdownMultiplayerServerRequest>(get_class());
        }
    } // namespace ShutdownMultiplayerServerRequest
} // namespace app::classes::types
