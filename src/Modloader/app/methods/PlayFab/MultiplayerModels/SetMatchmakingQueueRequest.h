#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetMatchmakingQueueRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::SetMatchmakingQueueRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetMatchmakingQueueRequest* this_ptr)
}
