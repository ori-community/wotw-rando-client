#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingPlayerAttributes.h>

namespace app::classes::PlayFab::MultiplayerModels::MatchmakingPlayerAttributes {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MatchmakingPlayerAttributes * this_ptr))
}
