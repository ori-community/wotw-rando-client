#pragma once
#include <Modloader/app/structs/MatchmakingUserTicketInviteEventData.h>
#include <Modloader/app/structs/MatchmakingUserTicketInviteEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketInviteEventData {
        inline app::MatchmakingUserTicketInviteEventData__Class** type_info() {
            static app::MatchmakingUserTicketInviteEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MatchmakingUserTicketInviteEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MatchmakingUserTicketInviteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketInviteEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "MatchmakingUserTicketInviteEventData");
        }
        inline app::MatchmakingUserTicketInviteEventData* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketInviteEventData>(get_class());
        }
    } // namespace MatchmakingUserTicketInviteEventData
} // namespace app::classes::types
