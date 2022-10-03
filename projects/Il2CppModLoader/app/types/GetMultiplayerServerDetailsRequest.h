#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMultiplayerServerDetailsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMultiplayerServerDetailsRequest__Class** type_info;
        inline app::GetMultiplayerServerDetailsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMultiplayerServerDetailsRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetMultiplayerServerDetailsRequest");
        }
        inline app::GetMultiplayerServerDetailsRequest* create() {
            return il2cpp::create_object<app::GetMultiplayerServerDetailsRequest>(get_class());
        }
    } // namespace GetMultiplayerServerDetailsRequest
} // namespace app::classes::types
