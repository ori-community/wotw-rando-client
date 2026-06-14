#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkXboxAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkXboxAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::UnlinkXboxAccountRequest* this_ptr)
}
