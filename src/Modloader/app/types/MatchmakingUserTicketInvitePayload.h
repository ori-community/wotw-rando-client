#pragma once
#include <Modloader/app/structs/MatchmakingUserTicketInvitePayload.h>
#include <Modloader/app/structs/MatchmakingUserTicketInvitePayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketInvitePayload {
        inline app::MatchmakingUserTicketInvitePayload__Class** type_info() {
            static app::MatchmakingUserTicketInvitePayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingUserTicketInvitePayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingUserTicketInvitePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketInvitePayload__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingUserTicketInvitePayload");
        }
        inline app::MatchmakingUserTicketInvitePayload* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketInvitePayload>(get_class());
        }
    } // namespace MatchmakingUserTicketInvitePayload
} // namespace app::classes::types
