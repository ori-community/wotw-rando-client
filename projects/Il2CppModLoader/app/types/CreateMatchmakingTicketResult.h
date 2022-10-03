#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateMatchmakingTicketResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateMatchmakingTicketResult__Class** type_info;
        inline app::CreateMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::CreateMatchmakingTicketResult__Class>(type_info, "PlayFab.MultiplayerModels", "CreateMatchmakingTicketResult");
        }
        inline app::CreateMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::CreateMatchmakingTicketResult>(get_class());
        }
    } // namespace CreateMatchmakingTicketResult
} // namespace app::classes::types
