#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveMatchmakingQueueRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::RemoveMatchmakingQueueRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RemoveMatchmakingQueueRequest* this_ptr)
}
