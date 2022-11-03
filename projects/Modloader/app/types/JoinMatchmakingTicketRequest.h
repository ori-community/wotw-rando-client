#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JoinMatchmakingTicketRequest {
        inline app::JoinMatchmakingTicketRequest__Class** type_info = (app::JoinMatchmakingTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x0470C9F0));
        inline app::JoinMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::JoinMatchmakingTicketRequest__Class>(type_info, "PlayFab.MultiplayerModels", "JoinMatchmakingTicketRequest");
        }
        inline app::JoinMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::JoinMatchmakingTicketRequest>(get_class());
        }
    } // namespace JoinMatchmakingTicketRequest
} // namespace app::classes::types
