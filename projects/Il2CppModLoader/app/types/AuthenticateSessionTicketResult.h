#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticateSessionTicketResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthenticateSessionTicketResult__Class** type_info;
        inline app::AuthenticateSessionTicketResult__Class* get_class() {
            return il2cpp::get_class<app::AuthenticateSessionTicketResult__Class>(type_info, "PlayFab.ServerModels", "AuthenticateSessionTicketResult");
        }
        inline app::AuthenticateSessionTicketResult* create() {
            return il2cpp::create_object<app::AuthenticateSessionTicketResult>(get_class());
        }
    } // namespace AuthenticateSessionTicketResult
} // namespace app::classes::types
