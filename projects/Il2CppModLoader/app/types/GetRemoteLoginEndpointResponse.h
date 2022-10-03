#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetRemoteLoginEndpointResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetRemoteLoginEndpointResponse__Class** type_info;
        inline app::GetRemoteLoginEndpointResponse__Class* get_class() {
            return il2cpp::get_class<app::GetRemoteLoginEndpointResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointResponse");
        }
        inline app::GetRemoteLoginEndpointResponse* create() {
            return il2cpp::create_object<app::GetRemoteLoginEndpointResponse>(get_class());
        }
    } // namespace GetRemoteLoginEndpointResponse
} // namespace app::classes::types
