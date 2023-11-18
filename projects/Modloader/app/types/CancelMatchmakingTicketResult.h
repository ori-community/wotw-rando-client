#pragma once
#include <Modloader/app/structs/CancelMatchmakingTicketResult.h>
#include <Modloader/app/structs/CancelMatchmakingTicketResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelMatchmakingTicketResult {
        inline app::CancelMatchmakingTicketResult__Class** type_info() {
            static app::CancelMatchmakingTicketResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelMatchmakingTicketResult__Class**)(modloader::win::memory::resolve_rva(0x0477A578));
            }
            return cache;
        }
        inline app::CancelMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::CancelMatchmakingTicketResult__Class>(type_info(), "PlayFab.MultiplayerModels", "CancelMatchmakingTicketResult");
        }
        inline app::CancelMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::CancelMatchmakingTicketResult>(get_class());
        }
    } // namespace CancelMatchmakingTicketResult
} // namespace app::classes::types
