#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMultiplayerServerDetailsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMultiplayerServerDetailsResponse__Class** type_info;
        inline app::GetMultiplayerServerDetailsResponse__Class* get_class() {
            return il2cpp::get_class<app::GetMultiplayerServerDetailsResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetMultiplayerServerDetailsResponse");
        }
        inline app::GetMultiplayerServerDetailsResponse* create() {
            return il2cpp::create_object<app::GetMultiplayerServerDetailsResponse>(get_class());
        }
    } // namespace GetMultiplayerServerDetailsResponse
} // namespace app::classes::types
