#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingQueueRule.h>

namespace app::classes::PlayFab::MultiplayerModels::MatchmakingQueueRule {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingQueueRule* this_ptr)
}
