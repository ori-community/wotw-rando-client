#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMatchmakingTicketsForPlayerResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMatchmakingTicketsForPlayerResult__Class** type_info;
        inline app::ListMatchmakingTicketsForPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::ListMatchmakingTicketsForPlayerResult__Class>(type_info, "PlayFab.MultiplayerModels", "ListMatchmakingTicketsForPlayerResult");
        }
        inline app::ListMatchmakingTicketsForPlayerResult* create() {
            return il2cpp::create_object<app::ListMatchmakingTicketsForPlayerResult>(get_class());
        }
    } // namespace ListMatchmakingTicketsForPlayerResult
} // namespace app::classes::types
