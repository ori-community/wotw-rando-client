#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JoinMatchmakingTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JoinMatchmakingTicketRequest__Class** type_info;
        inline app::JoinMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::JoinMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "JoinMatchmakingTicketRequest");
        }
        inline app::JoinMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::JoinMatchmakingTicketRequest>(get_class());
        }
    } // namespace JoinMatchmakingTicketRequest
} // namespace app::classes::types
