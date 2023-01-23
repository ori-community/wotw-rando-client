#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RegisterPlayFabUserRequest.h>

namespace app::classes::PlayFab::ClientModels::RegisterPlayFabUserRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RegisterPlayFabUserRequest * this_ptr))
}
