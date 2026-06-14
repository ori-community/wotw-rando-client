#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkTwitchAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkTwitchAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkTwitchAccountRequest* this_ptr)
}
