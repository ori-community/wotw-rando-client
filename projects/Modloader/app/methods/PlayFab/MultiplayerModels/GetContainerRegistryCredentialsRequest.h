#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetContainerRegistryCredentialsRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetContainerRegistryCredentialsRequest * this_ptr))
}
