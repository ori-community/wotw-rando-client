#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingUserTicketInviteEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::MatchmakingUserTicketInviteEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingUserTicketInviteEventData* this_ptr)
}
