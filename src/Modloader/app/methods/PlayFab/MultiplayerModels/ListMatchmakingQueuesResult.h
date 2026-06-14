#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMatchmakingQueuesResult.h>

namespace app::classes::PlayFab::MultiplayerModels::ListMatchmakingQueuesResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListMatchmakingQueuesResult* this_ptr)
}
