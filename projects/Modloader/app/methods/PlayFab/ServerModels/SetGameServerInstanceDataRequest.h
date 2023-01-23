#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetGameServerInstanceDataRequest.h>

namespace app::classes::PlayFab::ServerModels::SetGameServerInstanceDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SetGameServerInstanceDataRequest * this_ptr))
}
