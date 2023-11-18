#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CancelAllMatchmakingTicketsForPlayerRequest * this_ptr))
}
