#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoginWithOpenIdConnectRequest {
        inline app::LoginWithOpenIdConnectRequest__Class** type_info = (app::LoginWithOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x047333F0));
        inline app::LoginWithOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithOpenIdConnectRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithOpenIdConnectRequest");
        }
        inline app::LoginWithOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::LoginWithOpenIdConnectRequest>(get_class());
        }
    } // namespace LoginWithOpenIdConnectRequest
} // namespace app::classes::types
