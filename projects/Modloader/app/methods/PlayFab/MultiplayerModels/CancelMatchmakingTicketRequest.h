#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelMatchmakingTicketRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CancelMatchmakingTicketRequest * this_ptr))
}
