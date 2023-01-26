#pragma once
#include <Modloader/app/structs/CreateMatchmakingTicketResult.h>
#include <Modloader/app/structs/CreateMatchmakingTicketResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateMatchmakingTicketResult {
        inline app::CreateMatchmakingTicketResult__Class** type_info() {
            static app::CreateMatchmakingTicketResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateMatchmakingTicketResult__Class**)(modloader::win::memory::resolve_rva(0x0470C0A8));
            }
            return cache;
        }
        inline app::CreateMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::CreateMatchmakingTicketResult__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateMatchmakingTicketResult");
        }
        inline app::CreateMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::CreateMatchmakingTicketResult>(get_class());
        }
    } // namespace CreateMatchmakingTicketResult
} // namespace app::classes::types
