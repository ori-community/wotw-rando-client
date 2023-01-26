#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteRemoteUserRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::DeleteRemoteUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteRemoteUserRequest * this_ptr))
}
