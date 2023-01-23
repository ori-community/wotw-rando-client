#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetMatchmakingTicketResult__Class.h>
#include <Modloader/app/structs/GetMatchmakingTicketResult.h>

namespace app::classes::types {
    namespace GetMatchmakingTicketResult {
        inline app::GetMatchmakingTicketResult__Class** type_info = (app::GetMatchmakingTicketResult__Class**)(modloader::win::memory::resolve_rva(0x04793310));
        inline app::GetMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingTicketResult__Class>(type_info, "PlayFab.MultiplayerModels", "GetMatchmakingTicketResult");
        }
        inline app::GetMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::GetMatchmakingTicketResult>(get_class());
        }
    } // namespace GetMatchmakingTicketResult
} // namespace app::classes::types
