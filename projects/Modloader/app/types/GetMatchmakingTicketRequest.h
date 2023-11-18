#pragma once
#include <Modloader/app/structs/GetMatchmakingTicketRequest.h>
#include <Modloader/app/structs/GetMatchmakingTicketRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetMatchmakingTicketRequest {
        inline app::GetMatchmakingTicketRequest__Class** type_info() {
            static app::GetMatchmakingTicketRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetMatchmakingTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x0475ADA8));
            }
            return cache;
        }
        inline app::GetMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::GetMatchmakingTicketRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "GetMatchmakingTicketRequest");
        }
        inline app::GetMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::GetMatchmakingTicketRequest>(get_class());
        }
    } // namespace GetMatchmakingTicketRequest
} // namespace app::classes::types
