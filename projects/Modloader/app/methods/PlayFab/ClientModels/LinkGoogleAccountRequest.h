#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LinkGoogleAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkGoogleAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkGoogleAccountRequest * this_ptr))
}
