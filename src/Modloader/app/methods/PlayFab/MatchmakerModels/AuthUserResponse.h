#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthUserResponse.h>

namespace app::classes::PlayFab::MatchmakerModels::AuthUserResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AuthUserResponse* this_ptr)
}
