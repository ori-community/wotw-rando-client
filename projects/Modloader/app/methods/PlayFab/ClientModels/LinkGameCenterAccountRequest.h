#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkGameCenterAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkGameCenterAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LinkGameCenterAccountRequest* this_ptr)
}
