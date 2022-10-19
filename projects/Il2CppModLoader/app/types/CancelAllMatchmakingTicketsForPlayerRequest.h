#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelAllMatchmakingTicketsForPlayerRequest {
        inline app::CancelAllMatchmakingTicketsForPlayerRequest__Class** type_info = (app::CancelAllMatchmakingTicketsForPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x04773900));
        inline app::CancelAllMatchmakingTicketsForPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelAllMatchmakingTicketsForPlayerRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerRequest");
        }
        inline app::CancelAllMatchmakingTicketsForPlayerRequest* create() {
            return il2cpp::create_object<app::CancelAllMatchmakingTicketsForPlayerRequest>(get_class());
        }
    } // namespace CancelAllMatchmakingTicketsForPlayerRequest
} // namespace app::classes::types
