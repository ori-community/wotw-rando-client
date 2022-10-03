#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelAllMatchmakingTicketsForPlayerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancelAllMatchmakingTicketsForPlayerRequest__Class** type_info;
        inline app::CancelAllMatchmakingTicketsForPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelAllMatchmakingTicketsForPlayerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerRequest");
        }
        inline app::CancelAllMatchmakingTicketsForPlayerRequest* create() {
            return il2cpp::create_object<app::CancelAllMatchmakingTicketsForPlayerRequest>(get_class());
        }
    } // namespace CancelAllMatchmakingTicketsForPlayerRequest
} // namespace app::classes::types
