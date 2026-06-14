#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithGameCenterRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithGameCenterRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LoginWithGameCenterRequest* this_ptr)
}
