#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetPlayerSecretRequest_1.h>

namespace app::classes::PlayFab::ServerModels::SetPlayerSecretRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetPlayerSecretRequest_1* this_ptr)
}
