#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateMatchmakingTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateMatchmakingTicketRequest__Class** type_info;
        inline app::CreateMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateMatchmakingTicketRequest");
        }
        inline app::CreateMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CreateMatchmakingTicketRequest>(get_class());
        }
    } // namespace CreateMatchmakingTicketRequest
} // namespace app::classes::types
