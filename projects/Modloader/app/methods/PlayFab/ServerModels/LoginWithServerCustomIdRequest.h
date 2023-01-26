#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithServerCustomIdRequest.h>

namespace app::classes::PlayFab::ServerModels::LoginWithServerCustomIdRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithServerCustomIdRequest * this_ptr))
}
