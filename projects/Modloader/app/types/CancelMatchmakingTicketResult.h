#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelMatchmakingTicketResult {
        inline app::CancelMatchmakingTicketResult__Class** type_info = (app::CancelMatchmakingTicketResult__Class**)(modloader::win::memory::resolve_rva(0x0477A578));
        inline app::CancelMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::CancelMatchmakingTicketResult__Class>(type_info, "PlayFab.MultiplayerModels", "CancelMatchmakingTicketResult");
        }
        inline app::CancelMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::CancelMatchmakingTicketResult>(get_class());
        }
    } // namespace CancelMatchmakingTicketResult
} // namespace app::classes::types
