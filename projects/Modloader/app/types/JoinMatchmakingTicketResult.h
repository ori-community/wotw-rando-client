#pragma once
#include <Modloader/app/structs/JoinMatchmakingTicketResult.h>
#include <Modloader/app/structs/JoinMatchmakingTicketResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JoinMatchmakingTicketResult {
        inline app::JoinMatchmakingTicketResult__Class** type_info() {
            static app::JoinMatchmakingTicketResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JoinMatchmakingTicketResult__Class**)(modloader::win::memory::resolve_rva(0x04749D98));
            }
            return cache;
        }
        inline app::JoinMatchmakingTicketResult__Class* get_class() {
            return il2cpp::get_class<app::JoinMatchmakingTicketResult__Class>(type_info(), "PlayFab.MultiplayerModels", "JoinMatchmakingTicketResult");
        }
        inline app::JoinMatchmakingTicketResult* create() {
            return il2cpp::create_object<app::JoinMatchmakingTicketResult>(get_class());
        }
    } // namespace JoinMatchmakingTicketResult
} // namespace app::classes::types
