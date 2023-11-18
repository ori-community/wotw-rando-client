#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingPlayer.h>

namespace app::classes::PlayFab::MultiplayerModels::MatchmakingPlayer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MatchmakingPlayer * this_ptr))
}
