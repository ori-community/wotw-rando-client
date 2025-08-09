#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMatchmakingQueuesRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListMatchmakingQueuesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListMatchmakingQueuesRequest* this_ptr)
}
