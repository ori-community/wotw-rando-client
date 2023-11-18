#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerResult.h>

namespace app::classes::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CancelAllMatchmakingTicketsForPlayerResult * this_ptr))
}
