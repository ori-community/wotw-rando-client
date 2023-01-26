#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListMatchmakingTicketsForPlayerRequest * this_ptr))
}
