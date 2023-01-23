#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MatchmakingUserTicketInvitePayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MatchmakingUserTicketInvitePayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MatchmakingUserTicketInvitePayload * this_ptr))
}
