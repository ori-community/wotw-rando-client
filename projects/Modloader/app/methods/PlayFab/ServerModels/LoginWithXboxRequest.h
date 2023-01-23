#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoginWithXboxRequest_1.h>

namespace app::classes::PlayFab::ServerModels::LoginWithXboxRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoginWithXboxRequest_1 * this_ptr))
}
