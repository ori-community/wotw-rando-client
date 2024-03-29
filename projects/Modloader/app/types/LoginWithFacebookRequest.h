#pragma once
#include <Modloader/app/structs/LoginWithFacebookRequest.h>
#include <Modloader/app/structs/LoginWithFacebookRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithFacebookRequest {
        inline app::LoginWithFacebookRequest__Class** type_info() {
            static app::LoginWithFacebookRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithFacebookRequest__Class**)(modloader::win::memory::resolve_rva(0x04792F30));
            }
            return cache;
        }
        inline app::LoginWithFacebookRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithFacebookRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithFacebookRequest");
        }
        inline app::LoginWithFacebookRequest* create() {
            return il2cpp::create_object<app::LoginWithFacebookRequest>(get_class());
        }
    } // namespace LoginWithFacebookRequest
} // namespace app::classes::types
