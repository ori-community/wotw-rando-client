#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MatchmakingQueueConfig.h>

namespace app::classes::PlayFab::MultiplayerModels::MatchmakingQueueConfig {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MatchmakingQueueConfig* this_ptr)
}
