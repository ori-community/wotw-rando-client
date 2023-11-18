#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerResult.h>

namespace app::classes::PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListMatchmakingTicketsForPlayerResult * this_ptr))
}
