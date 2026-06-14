#pragma once
#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest.h>
#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateServerMatchmakingTicketRequest {
        inline app::CreateServerMatchmakingTicketRequest__Class** type_info() {
            static app::CreateServerMatchmakingTicketRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateServerMatchmakingTicketRequest__Class**)(modloader::win::memory::resolve_rva(0x04745D40));
            }
            return cache;
        }
        inline app::CreateServerMatchmakingTicketRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateServerMatchmakingTicketRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateServerMatchmakingTicketRequest");
        }
        inline app::CreateServerMatchmakingTicketRequest* create() {
            return il2cpp::create_object<app::CreateServerMatchmakingTicketRequest>(get_class());
        }
    } // namespace CreateServerMatchmakingTicketRequest
} // namespace app::classes::types
