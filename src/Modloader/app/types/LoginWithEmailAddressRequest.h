#pragma once
#include <Modloader/app/structs/LoginWithEmailAddressRequest.h>
#include <Modloader/app/structs/LoginWithEmailAddressRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithEmailAddressRequest {
        inline app::LoginWithEmailAddressRequest__Class** type_info() {
            static app::LoginWithEmailAddressRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithEmailAddressRequest__Class**)(modloader::win::memory::resolve_rva(0x0474BD70));
            }
            return cache;
        }
        inline app::LoginWithEmailAddressRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithEmailAddressRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithEmailAddressRequest");
        }
        inline app::LoginWithEmailAddressRequest* create() {
            return il2cpp::create_object<app::LoginWithEmailAddressRequest>(get_class());
        }
    } // namespace LoginWithEmailAddressRequest
} // namespace app::classes::types
