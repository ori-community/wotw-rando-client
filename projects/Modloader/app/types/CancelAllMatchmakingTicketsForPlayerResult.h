#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelAllMatchmakingTicketsForPlayerResult {
        inline app::CancelAllMatchmakingTicketsForPlayerResult__Class** type_info = (app::CancelAllMatchmakingTicketsForPlayerResult__Class**)(modloader::win::memory::resolve_rva(0x04721290));
        inline app::CancelAllMatchmakingTicketsForPlayerResult__Class* get_class() {
            return il2cpp::get_class<app::CancelAllMatchmakingTicketsForPlayerResult__Class>(type_info, "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerResult");
        }
        inline app::CancelAllMatchmakingTicketsForPlayerResult* create() {
            return il2cpp::create_object<app::CancelAllMatchmakingTicketsForPlayerResult>(get_class());
        }
    } // namespace CancelAllMatchmakingTicketsForPlayerResult
} // namespace app::classes::types
