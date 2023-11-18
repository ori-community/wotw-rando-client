#pragma once
#include <Modloader/app/structs/LoginWithPSNRequest.h>
#include <Modloader/app/structs/LoginWithPSNRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithPSNRequest {
        inline app::LoginWithPSNRequest__Class** type_info() {
            static app::LoginWithPSNRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithPSNRequest__Class**)(modloader::win::memory::resolve_rva(0x047346C0));
            }
            return cache;
        }
        inline app::LoginWithPSNRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithPSNRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithPSNRequest");
        }
        inline app::LoginWithPSNRequest* create() {
            return il2cpp::create_object<app::LoginWithPSNRequest>(get_class());
        }
    } // namespace LoginWithPSNRequest
} // namespace app::classes::types
