#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JoinMatchmakingTicketRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JoinMatchmakingTicketRequest * this_ptr))
}
