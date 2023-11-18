#pragma once
#include <Modloader/app/structs/LoginWithTwitchRequest.h>
#include <Modloader/app/structs/LoginWithTwitchRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithTwitchRequest {
        inline app::LoginWithTwitchRequest__Class** type_info() {
            static app::LoginWithTwitchRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithTwitchRequest__Class**)(modloader::win::memory::resolve_rva(0x04785A40));
            }
            return cache;
        }
        inline app::LoginWithTwitchRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithTwitchRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithTwitchRequest");
        }
        inline app::LoginWithTwitchRequest* create() {
            return il2cpp::create_object<app::LoginWithTwitchRequest>(get_class());
        }
    } // namespace LoginWithTwitchRequest
} // namespace app::classes::types
