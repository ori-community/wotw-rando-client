#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddUsernamePasswordRequest.h>

namespace app::classes::PlayFab::ClientModels::AddUsernamePasswordRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddUsernamePasswordRequest * this_ptr))
}
