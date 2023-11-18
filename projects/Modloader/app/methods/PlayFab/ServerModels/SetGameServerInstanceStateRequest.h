#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetGameServerInstanceStateRequest.h>

namespace app::classes::PlayFab::ServerModels::SetGameServerInstanceStateRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetGameServerInstanceStateRequest * this_ptr))
}
