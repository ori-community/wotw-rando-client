#pragma once
#include <Modloader/app/structs/LoginWithKongregateRequest.h>
#include <Modloader/app/structs/LoginWithKongregateRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithKongregateRequest {
        inline app::LoginWithKongregateRequest__Class** type_info() {
            static app::LoginWithKongregateRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithKongregateRequest__Class**)(modloader::win::memory::resolve_rva(0x04756480));
            }
            return cache;
        }
        inline app::LoginWithKongregateRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithKongregateRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithKongregateRequest");
        }
        inline app::LoginWithKongregateRequest* create() {
            return il2cpp::create_object<app::LoginWithKongregateRequest>(get_class());
        }
    } // namespace LoginWithKongregateRequest
} // namespace app::classes::types
