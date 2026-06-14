#pragma once
#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload.h>
#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketCompletePayload {
        inline app::MatchmakingUserTicketCompletePayload__Class** type_info() {
            static app::MatchmakingUserTicketCompletePayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingUserTicketCompletePayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingUserTicketCompletePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketCompletePayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingUserTicketCompletePayload");
        }
        inline app::MatchmakingUserTicketCompletePayload* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketCompletePayload>(get_class());
        }
    } // namespace MatchmakingUserTicketCompletePayload
} // namespace app::classes::types
