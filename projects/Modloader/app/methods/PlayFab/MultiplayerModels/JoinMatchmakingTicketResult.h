#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JoinMatchmakingTicketResult.h>

namespace app::classes::PlayFab::MultiplayerModels::JoinMatchmakingTicketResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JoinMatchmakingTicketResult * this_ptr))
}
