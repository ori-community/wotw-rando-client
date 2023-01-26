#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetMatchmakingQueueResult.h>

namespace app::classes::PlayFab::MultiplayerModels::SetMatchmakingQueueResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetMatchmakingQueueResult * this_ptr))
}
