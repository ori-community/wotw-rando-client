#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest__Class.h>
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest.h>

namespace app::classes::types {
    namespace GetPhotonAuthenticationTokenRequest {
        inline app::GetPhotonAuthenticationTokenRequest__Class** type_info = (app::GetPhotonAuthenticationTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DB98));
        inline app::GetPhotonAuthenticationTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPhotonAuthenticationTokenRequest__Class>(type_info, "PlayFab.ClientModels", "GetPhotonAuthenticationTokenRequest");
        }
        inline app::GetPhotonAuthenticationTokenRequest* create() {
            return il2cpp::create_object<app::GetPhotonAuthenticationTokenRequest>(get_class());
        }
    } // namespace GetPhotonAuthenticationTokenRequest
} // namespace app::classes::types
