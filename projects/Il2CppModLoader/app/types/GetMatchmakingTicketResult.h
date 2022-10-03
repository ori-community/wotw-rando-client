#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetMatchmakingTicketResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetMatchmakingTicketResult__Class** type_info;
        inline app::GetMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingTicketResult__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingTicketResult");
        }
        inline app::GetMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::GetMatchmakingTicketResult>(get_class());
        }
    } // namespace GetMatchmakingTicketResult
} // namespace app::classes::types
