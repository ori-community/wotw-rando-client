#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthUserRequest.h>

namespace app::classes::PlayFab::MatchmakerModels::AuthUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AuthUserRequest* this_ptr)
}
