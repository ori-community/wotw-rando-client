#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
