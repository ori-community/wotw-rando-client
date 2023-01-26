#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithGoogleAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithGoogleAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithGoogleAccountRequest * this_ptr))
}
