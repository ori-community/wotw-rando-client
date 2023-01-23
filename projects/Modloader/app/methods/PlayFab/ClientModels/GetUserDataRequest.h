#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetUserDataRequest.h>

namespace app::classes::PlayFab::ClientModels::GetUserDataRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GetUserDataRequest * this_ptr))
}
