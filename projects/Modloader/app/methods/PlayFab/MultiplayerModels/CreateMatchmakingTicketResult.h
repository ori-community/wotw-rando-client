#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateMatchmakingTicketResult.h>

namespace app::classes::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CreateMatchmakingTicketResult* this_ptr)
}
