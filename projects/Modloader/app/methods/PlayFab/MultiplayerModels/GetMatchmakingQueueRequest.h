#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetMatchmakingQueueRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::GetMatchmakingQueueRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetMatchmakingQueueRequest * this_ptr))
}
