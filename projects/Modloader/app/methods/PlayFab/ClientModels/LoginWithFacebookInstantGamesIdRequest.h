#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithFacebookInstantGamesIdRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithFacebookInstantGamesIdRequest * this_ptr))
}
