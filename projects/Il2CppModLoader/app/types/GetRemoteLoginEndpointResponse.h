#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetRemoteLoginEndpointResponse {
        inline app::GetRemoteLoginEndpointResponse__Class** type_info = (app::GetRemoteLoginEndpointResponse__Class**)(modloader::win::memory::resolve_rva(0x047381A8));
        inline app::GetRemoteLoginEndpointResponse__Class* get_class() {
            return il2cpp::get_class<app::GetRemoteLoginEndpointResponse__Class>(type_info, "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointResponse");
        }
        inline app::GetRemoteLoginEndpointResponse* create() {
            return il2cpp::create_object<app::GetRemoteLoginEndpointResponse>(get_class());
        }
    } // namespace GetRemoteLoginEndpointResponse
} // namespace app::classes::types
