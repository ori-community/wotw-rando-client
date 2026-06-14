#pragma once
#include <Modloader/app/structs/CreateMatchmakingTicketRequest.h>
#include <Modloader/app/structs/CreateMatchmakingTicketRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateMatchmakingTicketRequest {
        inline app::CreateMatchmakingTicketRequest__Class** type_info() {
            static app::CreateMatchmakingTicketRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateMatchmakingTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04790300));
            }
            return cache;
        }
        inline app::CreateMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateMatchmakingTicketRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateMatchmakingTicketRequest");
        }
        inline app::CreateMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CreateMatchmakingTicketRequest>(get_class());
        }
    } // namespace CreateMatchmakingTicketRequest
} // namespace app::classes::types
