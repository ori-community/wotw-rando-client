#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JoinMatchmakingTicketResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JoinMatchmakingTicketResult__Class** type_info;
        inline app::JoinMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::JoinMatchmakingTicketResult__Class>(type_info, "PlayFab.MultiplayerModels", "JoinMatchmakingTicketResult");
        }
        inline app::JoinMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::JoinMatchmakingTicketResult>(get_class());
        }
    } // namespace JoinMatchmakingTicketResult
} // namespace app::classes::types
