#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetMatchmakingQueueResult.h>

namespace app::classes::PlayFab::MultiplayerModels::GetMatchmakingQueueResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetMatchmakingQueueResult * this_ptr))
}
