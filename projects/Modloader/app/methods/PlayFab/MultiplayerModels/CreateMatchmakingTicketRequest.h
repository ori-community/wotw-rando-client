#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateMatchmakingTicketRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateMatchmakingTicketRequest * this_ptr))
}
