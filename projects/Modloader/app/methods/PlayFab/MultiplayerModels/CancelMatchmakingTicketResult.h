#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CancelMatchmakingTicketResult.h>

namespace app::classes::PlayFab::MultiplayerModels::CancelMatchmakingTicketResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CancelMatchmakingTicketResult * this_ptr))
}
