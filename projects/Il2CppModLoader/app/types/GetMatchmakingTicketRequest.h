#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMatchmakingTicketRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMatchmakingTicketRequest__Class** type_info;
        inline app::GetMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingTicketRequest");
        }
        inline app::GetMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::GetMatchmakingTicketRequest>(get_class());
        }
    } // namespace GetMatchmakingTicketRequest
} // namespace app::classes::types
