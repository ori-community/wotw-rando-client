#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CreateServerMatchmakingTicketRequest* this_ptr)
}
