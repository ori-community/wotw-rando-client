#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetRemoteLoginEndpointRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetRemoteLoginEndpointRequest__Class** type_info;
        inline app::GetRemoteLoginEndpointRequest__Class* get_class() {
            return il2cpp::get_class<app::GetRemoteLoginEndpointRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointRequest");
        }
        inline app::GetRemoteLoginEndpointRequest* create() {
            return il2cpp::create_object<app::GetRemoteLoginEndpointRequest>(get_class());
        }
    } // namespace GetRemoteLoginEndpointRequest
} // namespace app::classes::types
