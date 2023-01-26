#pragma once
#include <Modloader/app/structs/AuthUserRequest.h>
#include <Modloader/app/structs/AuthUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthUserRequest {
        inline app::AuthUserRequest__Class** type_info() {
            static app::AuthUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04758C38));
            }
            return cache;
        }
        inline app::AuthUserRequest__Class* get_class() {
            return il2cpp::get_class<app::AuthUserRequest__Class>(type_info(), "PlayFab.MatchmakerModels", "AuthUserRequest");
        }
        inline app::AuthUserRequest* create() {
            return il2cpp::create_object<app::AuthUserRequest>(get_class());
        }
    } // namespace AuthUserRequest
} // namespace app::classes::types
