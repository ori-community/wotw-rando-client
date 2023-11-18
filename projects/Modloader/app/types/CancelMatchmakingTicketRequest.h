#pragma once
#include <Modloader/app/structs/CancelMatchmakingTicketRequest.h>
#include <Modloader/app/structs/CancelMatchmakingTicketRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelMatchmakingTicketRequest {
        inline app::CancelMatchmakingTicketRequest__Class** type_info() {
            static app::CancelMatchmakingTicketRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelMatchmakingTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04725FB0));
            }
            return cache;
        }
        inline app::CancelMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelMatchmakingTicketRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "CancelMatchmakingTicketRequest");
        }
        inline app::CancelMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CancelMatchmakingTicketRequest>(get_class());
        }
    } // namespace CancelMatchmakingTicketRequest
} // namespace app::classes::types
