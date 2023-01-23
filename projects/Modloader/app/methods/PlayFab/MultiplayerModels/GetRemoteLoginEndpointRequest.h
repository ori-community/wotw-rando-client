#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetRemoteLoginEndpointRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetRemoteLoginEndpointRequest * this_ptr))
}
