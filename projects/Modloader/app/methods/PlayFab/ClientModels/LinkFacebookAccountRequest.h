#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkFacebookAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkFacebookAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkFacebookAccountRequest * this_ptr))
}
