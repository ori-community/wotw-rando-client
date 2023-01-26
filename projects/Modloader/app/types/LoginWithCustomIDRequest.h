#pragma once
#include <Modloader/app/structs/LoginWithCustomIDRequest.h>
#include <Modloader/app/structs/LoginWithCustomIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithCustomIDRequest {
        inline app::LoginWithCustomIDRequest__Class** type_info() {
            static app::LoginWithCustomIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithCustomIDRequest__Class**)(modloader::win::memory::resolve_rva(0x0471A9F0));
            }
            return cache;
        }
        inline app::LoginWithCustomIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithCustomIDRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithCustomIDRequest");
        }
        inline app::LoginWithCustomIDRequest* create() {
            return il2cpp::create_object<app::LoginWithCustomIDRequest>(get_class());
        }
    } // namespace LoginWithCustomIDRequest
} // namespace app::classes::types
