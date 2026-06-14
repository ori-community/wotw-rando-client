#pragma once
#include <Modloader/app/structs/LoginWithWindowsHelloRequest.h>
#include <Modloader/app/structs/LoginWithWindowsHelloRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithWindowsHelloRequest {
        inline app::LoginWithWindowsHelloRequest__Class** type_info() {
            static app::LoginWithWindowsHelloRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithWindowsHelloRequest__Class**)(modloader::win::memory::resolve_rva(0x0474D0E0));
            }
            return cache;
        }
        inline app::LoginWithWindowsHelloRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithWindowsHelloRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithWindowsHelloRequest");
        }
        inline app::LoginWithWindowsHelloRequest* create() {
            return il2cpp::create_object<app::LoginWithWindowsHelloRequest>(get_class());
        }
    } // namespace LoginWithWindowsHelloRequest
} // namespace app::classes::types
