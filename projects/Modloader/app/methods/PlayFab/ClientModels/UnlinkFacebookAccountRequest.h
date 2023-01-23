#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkFacebookAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkFacebookAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkFacebookAccountRequest * this_ptr))
}
