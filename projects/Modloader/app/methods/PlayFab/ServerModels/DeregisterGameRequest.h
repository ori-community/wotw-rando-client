#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeregisterGameRequest.h>

namespace app::classes::PlayFab::ServerModels::DeregisterGameRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DeregisterGameRequest* this_ptr)
}
