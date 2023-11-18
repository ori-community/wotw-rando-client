#pragma once
#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>
#include <Modloader/app/structs/LoginWithServerCustomIdRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithServerCustomIdRequest {
        inline app::LoginWithServerCustomIdRequest__Class** type_info() {
            static app::LoginWithServerCustomIdRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithServerCustomIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04756DD8));
            }
            return cache;
        }
        inline app::LoginWithServerCustomIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithServerCustomIdRequest__Class>(type_info(), "PlayFab.ServerModels", "LoginWithServerCustomIdRequest");
        }
        inline app::LoginWithServerCustomIdRequest* create() {
            return il2cpp::create_object<app::LoginWithServerCustomIdRequest>(get_class());
        }
    } // namespace LoginWithServerCustomIdRequest
} // namespace app::classes::types
