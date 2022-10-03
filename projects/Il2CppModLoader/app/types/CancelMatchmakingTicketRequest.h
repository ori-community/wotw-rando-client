#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelMatchmakingTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancelMatchmakingTicketRequest__Class** type_info;
        inline app::CancelMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CancelMatchmakingTicketRequest");
        }
        inline app::CancelMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CancelMatchmakingTicketRequest>(get_class());
        }
    } // namespace CancelMatchmakingTicketRequest
} // namespace app::classes::types
