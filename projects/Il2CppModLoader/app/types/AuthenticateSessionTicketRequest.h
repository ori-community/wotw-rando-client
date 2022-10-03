#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticateSessionTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthenticateSessionTicketRequest__Class** type_info;
        inline app::AuthenticateSessionTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::AuthenticateSessionTicketRequest__Class>(type_info, "PlayFab.ServerModels", "AuthenticateSessionTicketRequest");
        }
        inline app::AuthenticateSessionTicketRequest* create() {
            return il2cpp::create_object<app::AuthenticateSessionTicketRequest>(get_class());
        }
    } // namespace AuthenticateSessionTicketRequest
} // namespace app::classes::types
