#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnlinkGoogleAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkGoogleAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkGoogleAccountRequest * this_ptr))
}
