#pragma once
#include <Modloader/app/structs/GetRemoteLoginEndpointResponse.h>
#include <Modloader/app/structs/GetRemoteLoginEndpointResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetRemoteLoginEndpointResponse {
        inline app::GetRemoteLoginEndpointResponse__Class** type_info() {
            static app::GetRemoteLoginEndpointResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetRemoteLoginEndpointResponse__Class**)(modloader::win::memory::resolve_rva(0x047381A8));
            }
            return cache;
        }
        inline app::GetRemoteLoginEndpointResponse__Class* get_class() {
            return il2cpp::get_class<app::GetRemoteLoginEndpointResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "GetRemoteLoginEndpointResponse");
        }
        inline app::GetRemoteLoginEndpointResponse* create() {
            return il2cpp::create_object<app::GetRemoteLoginEndpointResponse>(get_class());
        }
    } // namespace GetRemoteLoginEndpointResponse
} // namespace app::classes::types
