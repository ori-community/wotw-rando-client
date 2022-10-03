#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelAllMatchmakingTicketsForPlayerResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CancelAllMatchmakingTicketsForPlayerResult__Class** type_info;
        inline app::CancelAllMatchmakingTicketsForPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::CancelAllMatchmakingTicketsForPlayerResult__Class>(type_info, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerResult");
        }
        inline app::CancelAllMatchmakingTicketsForPlayerResult* create() {
            return il2cpp::create_object<app::CancelAllMatchmakingTicketsForPlayerResult>(get_class());
        }
    } // namespace CancelAllMatchmakingTicketsForPlayerResult
} // namespace app::classes::types
