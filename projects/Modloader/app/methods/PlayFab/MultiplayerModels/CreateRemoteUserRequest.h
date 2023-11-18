#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateRemoteUserRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::CreateRemoteUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateRemoteUserRequest * this_ptr))
}
