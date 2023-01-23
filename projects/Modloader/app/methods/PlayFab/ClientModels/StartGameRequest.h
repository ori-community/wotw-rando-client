#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StartGameRequest.h>

namespace app::classes::PlayFab::ClientModels::StartGameRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StartGameRequest * this_ptr))
}
