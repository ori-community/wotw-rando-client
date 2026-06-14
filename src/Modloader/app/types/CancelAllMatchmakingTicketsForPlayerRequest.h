#pragma once
#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerRequest.h>
#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelAllMatchmakingTicketsForPlayerRequest {
        inline app::CancelAllMatchmakingTicketsForPlayerRequest__Class** type_info() {
            static app::CancelAllMatchmakingTicketsForPlayerRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelAllMatchmakingTicketsForPlayerRequest__Class**)(modloader::win::memory::resolve_rva(0x04773900));
            }
            return cache;
        }
        inline app::CancelAllMatchmakingTicketsForPlayerRequest__Class* get_class() {
            return il2cpp::get_class<app::CancelAllMatchmakingTicketsForPlayerRequest__Class>(type_info(), "PlayFab.MultiplayerModels", "CancelAllMatchmakingTicketsForPlayerRequest");
        }
        inline app::CancelAllMatchmakingTicketsForPlayerRequest* create() {
            return il2cpp::create_object<app::CancelAllMatchmakingTicketsForPlayerRequest>(get_class());
        }
    } // namespace CancelAllMatchmakingTicketsForPlayerRequest
} // namespace app::classes::types
