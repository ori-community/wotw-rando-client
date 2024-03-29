#pragma once
#include <Modloader/app/structs/LoginWithXboxRequest.h>
#include <Modloader/app/structs/LoginWithXboxRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithXboxRequest {
        inline app::LoginWithXboxRequest__Class** type_info() {
            static app::LoginWithXboxRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithXboxRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DA80));
            }
            return cache;
        }
        inline app::LoginWithXboxRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithXboxRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithXboxRequest");
        }
        inline app::LoginWithXboxRequest* create() {
            return il2cpp::create_object<app::LoginWithXboxRequest>(get_class());
        }
    } // namespace LoginWithXboxRequest
} // namespace app::classes::types
