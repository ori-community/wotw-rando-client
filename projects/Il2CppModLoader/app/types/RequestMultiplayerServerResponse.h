#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestMultiplayerServerResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestMultiplayerServerResponse__Class** type_info;
        inline app::RequestMultiplayerServerResponse__Class* get_class() {
            return il2cpp::get_class<app::RequestMultiplayerServerResponse__Class>(type_info, "PlayFab.MultiplayerModels", "RequestMultiplayerServerResponse");
        }
        inline app::RequestMultiplayerServerResponse* create() {
            return il2cpp::create_object<app::RequestMultiplayerServerResponse>(get_class());
        }
    } // namespace RequestMultiplayerServerResponse
} // namespace app::classes::types
