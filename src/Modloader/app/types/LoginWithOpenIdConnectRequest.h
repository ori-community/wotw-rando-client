#pragma once
#include <Modloader/app/structs/LoginWithOpenIdConnectRequest.h>
#include <Modloader/app/structs/LoginWithOpenIdConnectRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithOpenIdConnectRequest {
        inline app::LoginWithOpenIdConnectRequest__Class** type_info() {
            static app::LoginWithOpenIdConnectRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithOpenIdConnectRequest__Class**)(modloader::win::memory::resolve_rva(0x047333F0));
            }
            return cache;
        }
        inline app::LoginWithOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithOpenIdConnectRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithOpenIdConnectRequest");
        }
        inline app::LoginWithOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::LoginWithOpenIdConnectRequest>(get_class());
        }
    } // namespace LoginWithOpenIdConnectRequest
} // namespace app::classes::types
