#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithPlayFabRequest.h>

namespace app::classes::PlayFab::ClientModels::LoginWithPlayFabRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LoginWithPlayFabRequest* this_ptr)
}
