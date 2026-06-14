#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MatchmakingUserTicketCompletePayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingUserTicketCompletePayload* this_ptr)
}
