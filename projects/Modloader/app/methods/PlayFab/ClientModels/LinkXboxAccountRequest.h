#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LinkXboxAccountRequest.h>

namespace app::classes::PlayFab::ClientModels::LinkXboxAccountRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LinkXboxAccountRequest * this_ptr))
}
