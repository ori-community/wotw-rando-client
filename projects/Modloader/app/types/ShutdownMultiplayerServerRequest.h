#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShutdownMultiplayerServerRequest {
        inline app::ShutdownMultiplayerServerRequest__Class** type_info = (app::ShutdownMultiplayerServerRequest__Class**)(modloader::win::memory::resolve_rva(0x0471A010));
        inline app::ShutdownMultiplayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::ShutdownMultiplayerServerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ShutdownMultiplayerServerRequest");
        }
        inline app::ShutdownMultiplayerServerRequest* create() {
            return il2cpp::create_object<app::ShutdownMultiplayerServerRequest>(get_class());
        }
    } // namespace ShutdownMultiplayerServerRequest
} // namespace app::classes::types
