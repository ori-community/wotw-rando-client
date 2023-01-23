#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchmakingUserTicketInviteEventData__Class.h>
#include <Modloader/app/structs/MatchmakingUserTicketInviteEventData.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketInviteEventData {
        namespace {
            inline app::MatchmakingUserTicketInviteEventData__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingUserTicketInviteEventData__Class** type_info = &type_info_ref;
        inline app::MatchmakingUserTicketInviteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketInviteEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingUserTicketInviteEventData");
        }
        inline app::MatchmakingUserTicketInviteEventData* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketInviteEventData>(get_class());
        }
    } // namespace MatchmakingUserTicketInviteEventData
} // namespace app::classes::types
