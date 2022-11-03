#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketInvitePayload {
        namespace {
            inline app::MatchmakingUserTicketInvitePayload__Class* type_info_ref = nullptr;
        }
        inline app::MatchmakingUserTicketInvitePayload__Class** type_info = &type_info_ref;
        inline app::MatchmakingUserTicketInvitePayload__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketInvitePayload__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingUserTicketInvitePayload");
        }
        inline app::MatchmakingUserTicketInvitePayload* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketInvitePayload>(get_class());
        }
    } // namespace MatchmakingUserTicketInvitePayload
} // namespace app::classes::types
