#pragma once
#include <Modloader/app/structs/LoginWithFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/LoginWithFacebookInstantGamesIdRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithFacebookInstantGamesIdRequest {
        inline app::LoginWithFacebookInstantGamesIdRequest__Class** type_info() {
            static app::LoginWithFacebookInstantGamesIdRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B9A0));
            }
            return cache;
        }
        inline app::LoginWithFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithFacebookInstantGamesIdRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithFacebookInstantGamesIdRequest");
        }
        inline app::LoginWithFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::LoginWithFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace LoginWithFacebookInstantGamesIdRequest
} // namespace app::classes::types
