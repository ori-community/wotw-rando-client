#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MatchmakingUserTicketInviteEventData {
        namespace {
            app::MatchmakingUserTicketInviteEventData__Class* type_info_ref = nullptr;
        }
        app::MatchmakingUserTicketInviteEventData__Class** type_info = &type_info_ref;
        inline app::MatchmakingUserTicketInviteEventData__Class* get_class() {
            return il2cpp::get_class<app::MatchmakingUserTicketInviteEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MatchmakingUserTicketInviteEventData");
        }
        inline app::MatchmakingUserTicketInviteEventData* create() {
            return il2cpp::create_object<app::MatchmakingUserTicketInviteEventData>(get_class());
        }
    } // namespace MatchmakingUserTicketInviteEventData
} // namespace app::classes::types
