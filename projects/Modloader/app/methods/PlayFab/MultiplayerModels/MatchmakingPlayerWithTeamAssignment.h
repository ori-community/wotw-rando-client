#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingPlayerWithTeamAssignment.h>

namespace app::classes::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingPlayerWithTeamAssignment* this_ptr)
}
