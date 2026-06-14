#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetAccountInfoRequest.h>

namespace app::classes::PlayFab::ClientModels::GetAccountInfoRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetAccountInfoRequest* this_ptr)
}
