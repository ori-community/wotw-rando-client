#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestMultiplayerServerResponse {
        inline app::RequestMultiplayerServerResponse__Class** type_info = (app::RequestMultiplayerServerResponse__Class**)(modloader::win::memory::resolve_rva(0x04725FF0));
        inline app::RequestMultiplayerServerResponse__Class* get_class() {
            return il2cpp::get_class<app::RequestMultiplayerServerResponse__Class>(type_info, "PlayFab.MultiplayerModels", "RequestMultiplayerServerResponse");
        }
        inline app::RequestMultiplayerServerResponse* create() {
            return il2cpp::create_object<app::RequestMultiplayerServerResponse>(get_class());
        }
    } // namespace RequestMultiplayerServerResponse
} // namespace app::classes::types
