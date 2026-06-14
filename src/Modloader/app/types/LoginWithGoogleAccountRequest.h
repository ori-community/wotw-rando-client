#pragma once
#include <Modloader/app/structs/LoginWithGoogleAccountRequest.h>
#include <Modloader/app/structs/LoginWithGoogleAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithGoogleAccountRequest {
        inline app::LoginWithGoogleAccountRequest__Class** type_info() {
            static app::LoginWithGoogleAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047177F8));
            }
            return cache;
        }
        inline app::LoginWithGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithGoogleAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithGoogleAccountRequest");
        }
        inline app::LoginWithGoogleAccountRequest* create() {
            return il2cpp::create_object<app::LoginWithGoogleAccountRequest>(get_class());
        }
    } // namespace LoginWithGoogleAccountRequest
} // namespace app::classes::types
