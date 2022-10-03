#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestMultiplayerServerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RequestMultiplayerServerRequest__Class** type_info;
        inline app::RequestMultiplayerServerRequest__Class* get_class() {
            return il2cpp::get_class<app::RequestMultiplayerServerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "RequestMultiplayerServerRequest");
        }
        inline app::RequestMultiplayerServerRequest* create() {
            return il2cpp::create_object<app::RequestMultiplayerServerRequest>(get_class());
        }
    } // namespace RequestMultiplayerServerRequest
} // namespace app::classes::types
