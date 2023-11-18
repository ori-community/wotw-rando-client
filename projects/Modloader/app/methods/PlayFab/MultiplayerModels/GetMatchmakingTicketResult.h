#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetMatchmakingTicketResult.h>

namespace app::classes::PlayFab::MultiplayerModels::GetMatchmakingTicketResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetMatchmakingTicketResult * this_ptr))
}
