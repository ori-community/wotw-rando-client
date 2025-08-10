#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetRemoteLoginEndpointResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::GetRemoteLoginEndpointResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetRemoteLoginEndpointResponse* this_ptr)
}
