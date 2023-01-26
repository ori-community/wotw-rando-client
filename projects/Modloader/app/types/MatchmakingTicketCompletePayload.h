#pragma once
#include <Modloader/app/structs/MatchmakingTicketCompletePayload.h>
#include <Modloader/app/structs/MatchmakingTicketCompletePayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingTicketCompletePayload {
        inline app::MatchmakingTicketCompletePayload__Class** type_info() {
            static app::MatchmakingTicketCompletePayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingTicketCompletePayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingTicketCompletePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingTicketCompletePayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingTicketCompletePayload");
        }
        inline app::MatchmakingTicketCompletePayload* create() {
            return il2cpp::create_object<app::MatchmakingTicketCompletePayload>(get_class());
        }
    } // namespace MatchmakingTicketCompletePayload
} // namespace app::classes::types
