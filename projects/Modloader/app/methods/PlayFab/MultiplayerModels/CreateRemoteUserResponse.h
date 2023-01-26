#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateRemoteUserResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::CreateRemoteUserResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CreateRemoteUserResponse * this_ptr))
}
