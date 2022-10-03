#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingTicketsForPlayerRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMatchmakingTicketsForPlayerRequest__Class** type_info;
        inline app::ListMatchmakingTicketsForPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingTicketsForPlayerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "ListMatchmakingTicketsForPlayerRequest");
        }
        inline app::ListMatchmakingTicketsForPlayerRequest* create() {
            return il2cpp::create_object<app::ListMatchmakingTicketsForPlayerRequest>(get_class());
        }
    } // namespace ListMatchmakingTicketsForPlayerRequest
} // namespace app::classes::types
