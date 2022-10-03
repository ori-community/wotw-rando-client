#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelMatchmakingTicketResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancelMatchmakingTicketResult__Class** type_info;
        inline app::CancelMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::CancelMatchmakingTicketResult__Class>(type_info, "PlayFab.MultiplayerModels", "CancelMatchmakingTicketResult");
        }
        inline app::CancelMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::CancelMatchmakingTicketResult>(get_class());
        }
    } // namespace CancelMatchmakingTicketResult
} // namespace app::classes::types
