#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingUserTicketCompleteEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::MatchmakingUserTicketCompleteEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingUserTicketCompleteEventData* this_ptr)
}
