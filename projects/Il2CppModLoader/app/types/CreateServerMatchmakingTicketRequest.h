#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateServerMatchmakingTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateServerMatchmakingTicketRequest__Class** type_info;
        inline app::CreateServerMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateServerMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateServerMatchmakingTicketRequest");
        }
        inline app::CreateServerMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CreateServerMatchmakingTicketRequest>(get_class());
        }
    } // namespace CreateServerMatchmakingTicketRequest
} // namespace app::classes::types
