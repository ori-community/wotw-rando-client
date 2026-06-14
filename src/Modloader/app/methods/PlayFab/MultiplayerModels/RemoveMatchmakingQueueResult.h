#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveMatchmakingQueueResult.h>

namespace app::classes::PlayFab::MultiplayerModels::RemoveMatchmakingQueueResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RemoveMatchmakingQueueResult* this_ptr)
}
