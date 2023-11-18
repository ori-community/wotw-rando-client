#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetUserAccountInfoRequest.h>

namespace app::classes::PlayFab::ServerModels::GetUserAccountInfoRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetUserAccountInfoRequest * this_ptr))
}
