#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlinkGameCenterAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::UnlinkGameCenterAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnlinkGameCenterAccountRequest * this_ptr))
}
